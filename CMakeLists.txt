SET(SOURCES ui_Screen1.c
    ui_Screen2.c
    ui_Screen3.c
    ui.c
    ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    ui_img_emon_disp_bg_png.c
    ui_img_icn_wifi_png.c
    ui_img_588575976.c
    ui_img_icn_usb_png.c
    ui_img_btn_print_top_off_png.c
    fonts/ui_font_displayRobot128B.c
    fonts/ui_font_displayRobot164B.c
    fonts/ui_font_displayRobot24.c
    fonts/ui_font_displayRobot256B.c
    fonts/ui_font_displayRoboto16.c
    fonts/ui_font_displayRoboto18.c
    fonts/ui_font_displayRoboto18M.c
    fonts/ui_font_displayRoboto24.c
    fonts/ui_font_displayRoboto48.c
    fonts/ui_font_displayRoboto72.c
    fonts/ui_font_displayRoboto96.c)

add_library(ui ${SOURCES})
