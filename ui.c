// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: rkl-test1-SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Image3;
lv_obj_t * ui_RootPanel;
void ui_event_TopButton11(lv_event_t * e);
lv_obj_t * ui_TopButton11;
void ui_event_TopButton12(lv_event_t * e);
lv_obj_t * ui_TopButton12;
void ui_event_TopButton13(lv_event_t * e);
lv_obj_t * ui_TopButton13;
lv_obj_t * ui_Panel_Header1;
lv_obj_t * ui_Label_Header1;
lv_obj_t * ui_IMG_Wifi1;
lv_obj_t * ui_IMG_PC1;
lv_obj_t * ui_IMG_USB1;
lv_obj_t * ui_TopPanel;
lv_obj_t * ui_TextArea1;
lv_obj_t * ui_MainTempPanel;
lv_obj_t * ui_Temp;
lv_obj_t * ui_TextArea2;
lv_obj_t * ui_TempGraph;
lv_obj_t * ui_TempChart;


// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
lv_obj_t * ui_Screen2;
lv_obj_t * ui_Image1;
lv_obj_t * ui_RootPanel1;
void ui_event_TopButton21(lv_event_t * e);
lv_obj_t * ui_TopButton21;
void ui_event_TopButton22(lv_event_t * e);
lv_obj_t * ui_TopButton22;
void ui_event_TopButton23(lv_event_t * e);
lv_obj_t * ui_TopButton23;
lv_obj_t * ui_Panel_Header2;
lv_obj_t * ui_Label_Header2;
lv_obj_t * ui_IMG_Wifi2;
lv_obj_t * ui_IMG_PC2;
lv_obj_t * ui_IMG_USB2;
lv_obj_t * ui_TopPanel1;
lv_obj_t * ui_TextArea3;
lv_obj_t * ui_MainTempPanel1;
lv_obj_t * ui_Temp1;
lv_obj_t * ui_TextArea4;
lv_obj_t * ui_PanelTemp5;
lv_obj_t * ui_TextTemp5;
lv_obj_t * ui_PanelTemp6;
lv_obj_t * ui_TextTemp6;
lv_obj_t * ui_PanelTemp7;
lv_obj_t * ui_TextTemp7;
lv_obj_t * ui_PanelTemp8;
lv_obj_t * ui_TextTemp8;


// SCREEN: ui_Screen3
void ui_Screen3_screen_init(void);
lv_obj_t * ui_Screen3;
lv_obj_t * ui_Image2;
lv_obj_t * ui_RootPanel2;
void ui_event_TopButton31(lv_event_t * e);
lv_obj_t * ui_TopButton31;
void ui_event_TopButton32(lv_event_t * e);
lv_obj_t * ui_TopButton32;
void ui_event_TopButton33(lv_event_t * e);
lv_obj_t * ui_TopButton33;
lv_obj_t * ui_Panel_Header3;
lv_obj_t * ui_Label_Header3;
lv_obj_t * ui_IMG_Wifi3;
lv_obj_t * ui_IMG_PC3;
lv_obj_t * ui_IMG_USB3;
lv_obj_t * ui_TopPanel2;
lv_obj_t * ui_TextArea5;
lv_obj_t * ui_MainSensorSelectRoller;
lv_obj_t * ui_Label1;
lv_obj_t * ui_DSTCheckbox;
lv_obj_t * ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_TopButton11(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Screen2_screen_init);
    }
}
void ui_event_TopButton12(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Screen3, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Screen3_screen_init);
    }
}
void ui_event_TopButton13(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Screen3, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Screen3_screen_init);
    }
}
void ui_event_TopButton21(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Screen3, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Screen3_screen_init);
    }
}
void ui_event_TopButton22(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Screen1_screen_init);
    }
}
void ui_event_TopButton23(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Screen3, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Screen3_screen_init);
    }
}
void ui_event_TopButton31(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Screen1, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Screen1_screen_init);
    }
}
void ui_event_TopButton32(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Screen2, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Screen2_screen_init);
    }
}
void ui_event_TopButton33(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Screen3, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_Screen3_screen_init);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    ui_Screen3_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Screen1);
}
