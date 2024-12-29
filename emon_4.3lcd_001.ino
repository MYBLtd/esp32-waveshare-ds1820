#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Arduino.h>
#include <lvgl.h>
#include <TFT_eSPI.h>
#include <ESP_Panel_Library.h>
#include <ESP_IOExpander_Library.h>
#include "ui.h"
#include <NTPClient.h>
#include "WiFi.h"
#include <DallasTemperature.h>
/***************************************************************************************************
** Debug                                                                                          **
***************************************************************************************************/
#define DEBUG 0

#if DEBUG==1
#define outputDebug(x); Serial.print(x);
#define outputDebugLine(x); Serial.println(x);
#else
#define outputDebug(x); 
#define outputDebugLine(x); 
#endif

/***************************************************************************************************
** Declare all program constants                                                                  **
***************************************************************************************************/
const char *ssid     = "";
const char *password = "";

#define TIMEZONE_OFFSET         "UTC+1"    // Fill in the Timezone, e.g. "CST-8"
#define NVS_PART_NAME           "nvs"
#define NVS_PART_NAMESPACE      "result"
#define WIFI_NAME_LEN_MAX       20         // Maximum length for Wi-Fi name
#define WIFI_PASSWORD_LEN_MAX   20         // Maximum length for Wi-Fi password
#define DATE_INFO_LEN           20         // Maximum length for date information
#define TIME_INFO_LEN           10         // Maximum length for time information
#define WEEK_INFO_LEN           20         // Maximum length for week information
#define TEMPERATURE_LEN         20         // Maximum length for temperature information
#define LOOP_DELAY_MS           500        // Delay in milliseconds for the loop

/* LVGL porting configurations */
#define LVGL_TICK_PERIOD_MS     (2)
#define LVGL_TASK_MAX_DELAY_MS  (500)
#define LVGL_TASK_MIN_DELAY_MS  (1)
#define LVGL_TASK_STACK_SIZE    (4 * 1024)
#define LVGL_TASK_PRIORITY      (2)
#define LVGL_BUF_SIZE           (ESP_PANEL_LCD_H_RES * 20)
#define ONE_WIRE_BUS 6
#define precision 10 
/***************************************************************************************************
** Declare global variables and instantiate classes                                               **
***************************************************************************************************/
String arr_dagen[]={"zondag","maandag","dinsdag","woensdag","donderdag","vrijdag","zaterdag"};
String datum;
String tijd;
String weekdag;

int deviceCount = 0;                          // Counter of Dallas sensors
float tempC;
int  resolution = 10;
unsigned long lastTempRequest = 0;
int  delayInMillis = 0;
float temperature = 0.0;
int  idle = 0;
/***************************************************************************************************
**  create objects                                                                                **
***************************************************************************************************/
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "europe.pool.ntp.org", 3600, 60000);

ESP_Panel *panel = NULL;
SemaphoreHandle_t lvgl_mux = NULL;                  // LVGL mutex
static const uint16_t screenWidth  = 800;
static const uint16_t screenHeight = 480;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[ screenWidth * screenHeight / 10 ];

#if ESP_PANEL_LCD_BUS_TYPE == ESP_PANEL_BUS_TYPE_RGB
/* Display flushing */
void lvgl_port_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
    panel->getLcd()->drawBitmap(area->x1, area->y1, area->x2 + 1, area->y2 + 1, color_p);
    lv_disp_flush_ready(disp);
}
#else
/* Display flushing */
void lvgl_port_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
    panel->getLcd()->drawBitmap(area->x1, area->y1, area->x2 + 1, area->y2 + 1, color_p);
}

bool notify_lvgl_flush_ready(void *user_ctx)
{
    lv_disp_drv_t *disp_driver = (lv_disp_drv_t *)user_ctx;
    lv_disp_flush_ready(disp_driver);
    return false;
}
#endif /* ESP_PANEL_LCD_BUS_TYPE */

#if ESP_PANEL_USE_LCD_TOUCH
/* Read the touchpad */
void lvgl_port_tp_read(lv_indev_drv_t * indev, lv_indev_data_t * data)
{
    panel->getLcdTouch()->readData();

    bool touched = panel->getLcdTouch()->getTouchState();
    if(!touched) {
        data->state = LV_INDEV_STATE_REL;
    } else {
        TouchPoint point = panel->getLcdTouch()->getPoint();

        data->state = LV_INDEV_STATE_PR;
        /*Set the coordinates*/
        data->point.x = point.x;
        data->point.y = point.y;

        // Serial.printf("Touch point: x %d, y %d\n", point.x, point.y);
    }
}
#endif

void lvgl_port_lock(int timeout_ms)
{
    const TickType_t timeout_ticks = (timeout_ms < 0) ? portMAX_DELAY : pdMS_TO_TICKS(timeout_ms);
    xSemaphoreTakeRecursive(lvgl_mux, timeout_ticks);
}

void lvgl_port_unlock(void)
{
    xSemaphoreGiveRecursive(lvgl_mux);
}

void lvgl_port_task(void *arg)
{
    Serial.println("Starting LVGL task");

    uint32_t task_delay_ms = LVGL_TASK_MAX_DELAY_MS;
    while (1) {
        // Lock the mutex due to the LVGL APIs are not thread-safe
        lvgl_port_lock(-1);
        task_delay_ms = lv_timer_handler();
        // Release the mutex
        lvgl_port_unlock();
        if (task_delay_ms > LVGL_TASK_MAX_DELAY_MS) {
            task_delay_ms = LVGL_TASK_MAX_DELAY_MS;
        } else if (task_delay_ms < LVGL_TASK_MIN_DELAY_MS) {
            task_delay_ms = LVGL_TASK_MIN_DELAY_MS;
        }
        vTaskDelay(pdMS_TO_TICKS(task_delay_ms));
    }
}


/*Read the touchpad*/
void my_touchpad_read( lv_indev_drv_t * indev_driver, lv_indev_data_t * data )
{
    uint16_t touchX = 0, touchY = 0;

    bool touched = false;//tft.getTouch( &touchX, &touchY, 600 );

    if( !touched )
    {
        data->state = LV_INDEV_STATE_REL;
    }
    else
    {
        data->state = LV_INDEV_STATE_PR;

        /*Set the coordinates*/
        data->point.x = touchX;
        data->point.y = touchY;

        Serial.print( "Data x " );
        Serial.println( touchX );

        Serial.print( "Data y " );
        Serial.println( touchY );
    }
}

/***************************************************************************************************
**  callback function, fired when NTP gets updated.                                               **
** Used to print the updated time or adjust an external RTC module.                               **
***************************************************************************************************/
void on_time_available(struct timeval *t)
{  
  Serial.println("Received time adjustment from NTP");
}

void printAddress(DeviceAddress deviceAddress)        // function to print a device address
{
  for (uint8_t i = 0; i < 8; i++)
    {
    // zero pad the address if necessary
    if (deviceAddress[i] < 16) Serial.print("0");
      Serial.print(deviceAddress[i], HEX);
    }
}

void printTemperature(DeviceAddress deviceAddress)    // function to print the temperature for a device
{ 
    float tempC = sensors.getTempC(deviceAddress);
    Serial.print("Temp : ");
    Serial.print(tempC);
    Serial.print(" Celcius degres ");
    // Serial.print(" Temp F: ");
    // Serial.print(DallasTemperature::toFahrenheit(tempC));
}

void printResolution(DeviceAddress deviceAddress)     // function to print a device's resolution
{
}
 
void printData(DeviceAddress deviceAddress)
{
  Serial.print("Device Address: ");
  printAddress(deviceAddress);
  Serial.print(" ");
  printTemperature(deviceAddress);
  Serial.println();
}

void setup()
{
    Serial.begin(115200); /* prepare for possible serial debug */
    Serial.println("Emon display boot.");
    
    WiFi.begin(ssid, password);

    while ( WiFi.status() != WL_CONNECTED ) {
      delay ( 500 );
      Serial.print ( "." );
    }

    timeClient.begin();

    panel = new ESP_Panel();
    /* Initialize LVGL core */
    lv_init();

    /* Initialize LVGL buffers */
    static lv_disp_draw_buf_t draw_buf;
    /* Using double buffers is more faster than single buffer */
    /* Using internal SRAM is more fast than PSRAM (Note: Memory allocated using `malloc` may be located in PSRAM.) */
    uint8_t *buf = (uint8_t *)heap_caps_calloc(1, LVGL_BUF_SIZE * sizeof(lv_color_t), MALLOC_CAP_INTERNAL);
    assert(buf);
    lv_disp_draw_buf_init(&draw_buf, buf, NULL, LVGL_BUF_SIZE);

    /* Initialize the display device */
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    /* Change the following line to your display resolution */
    disp_drv.hor_res = ESP_PANEL_LCD_H_RES;
    disp_drv.ver_res = ESP_PANEL_LCD_V_RES;
    disp_drv.flush_cb = lvgl_port_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register(&disp_drv);

    #if ESP_PANEL_USE_LCD_TOUCH
      /* Initialize the input device */
      static lv_indev_drv_t indev_drv;
      lv_indev_drv_init(&indev_drv);
      indev_drv.type = LV_INDEV_TYPE_POINTER;
      indev_drv.read_cb = lvgl_port_tp_read;
      lv_indev_drv_register(&indev_drv);
    #endif


    #if defined(ESP_PANEL_BOARD_ESP32_S3_LCD_EV_BOARD) || defined(ESP_PANEL_BOARD_ESP32_S3_KORVO_2)
      /**
      * These development boards require the use of an IO expander to configure the screen,
      * so it needs to be initialized in advance and registered with the panel for use.
      *
      */
      Serial.println("Initialize IO expander");
      /* Initialize IO expander */
      ESP_IOExpander *expander = new ESP_IOExpander_TCA95xx_8bit(ESP_PANEL_LCD_TOUCH_BUS_HOST_ID, ESP_IO_EXPANDER_I2C_TCA9554_ADDRESS_000, ESP_PANEL_LCD_TOUCH_I2C_IO_SCL, ESP_PANEL_LCD_TOUCH_I2C_IO_SDA);
      expander->init();
      expander->begin();
      /* Add into panel */
      panel->addIOExpander(expander);
    #endif

    /* Initialize bus and device of panel */
    panel->init();
    #if ESP_PANEL_LCD_BUS_TYPE != ESP_PANEL_BUS_TYPE_RGB
        /* Register a function to notify LVGL when the panel is ready to flush */
        /* This is useful for refreshing the screen using DMA transfers */
        panel->getLcd()->setCallback(notify_lvgl_flush_ready, &disp_drv);
    #endif
    
    /* Start panel */
    panel->begin();

    /* Create a task to run the LVGL task periodically */
    lvgl_mux = xSemaphoreCreateRecursiveMutex();
    xTaskCreate(lvgl_port_task, "lvgl", LVGL_TASK_STACK_SIZE, NULL, LVGL_TASK_PRIORITY, NULL);

    /* Lock the mutex due to the LVGL APIs are not thread-safe */
    lvgl_port_lock(-1);

    ui_init();

    /* Release the mutex */
    lvgl_port_unlock();

    sensors.begin(); 
    Serial.print("Locating devices...");                                    // locate devices on the bus
    Serial.print("Found ");
    deviceCount = sensors.getDeviceCount();
    Serial.print(deviceCount, DEC);
    Serial.println(" devices.");
    Serial.println("");



    Serial.println("Setup done");
}

void loop() {
  int day = timeClient.getDay();
  weekdag =(arr_dagen[day]+","); 
  datum = timeClient.getFormattedDate();
  //tijd = (timeClient.getHours()+":"+timeClient.getMinutes()+":"+timeClient.getSeconds());
  lv_label_set_text_fmt(ui_Label_Header1, "%s %s %d:%d:%d", datum, weekdag, timeClient.getHours(),timeClient.getMinutes(),timeClient.getSeconds());
  
  timeClient.update();
       // Display temperature from each sensor      
      for (int i = 0;  i < deviceCount;  i++)
      {
        Serial.print("Sensor ");
        Serial.print(i+1);
        Serial.print(" : ");
        tempC = sensors.getTempCByIndex(i);
        Serial.print(tempC);
        Serial.print("°");                                                  //shows degrees character
        //Serial.print("C  |  ");
        //Serial.print(DallasTemperature::toFahrenheit(tempC));
        //Serial.print((char)176);//shows degrees character
        //Serial.println("F");
        Serial.println(" ");
      }
        idle = 0;     
      // immediately after fetching the temperature we request a new sample 
    	// in the async modus
      for (int i = 0;  i < deviceCount;  i++)
      {
        sensors.requestTemperatures(); 
      }

      delayInMillis = 750 / (1 << (12 - resolution));
      lastTempRequest = millis(); 
  
  
  delay(LOOP_DELAY_MS);
}

