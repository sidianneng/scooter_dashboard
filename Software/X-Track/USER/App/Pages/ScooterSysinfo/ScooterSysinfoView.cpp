#include "ScooterSysinfoView.h"
#include <stdarg.h>
#include <stdio.h>

using namespace Page;

void ScooterSysinfoView::Create(lv_obj_t* root)
{
    lv_obj_t* cont = lv_obj_create(root);
    lv_obj_remove_style_all(cont);
    lv_obj_set_size(cont, LV_HOR_RES, LV_VER_RES);
    
    lv_obj_center(cont);
    lv_obj_set_style_bg_opa(cont, LV_OPA_COVER, 0);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0x000000), 0);

    ui.remainMile = Info_Create(cont, "0.0Km", "REMAIN", 0, -60);
    ui.remainBat  = Info_Create(cont, "0%", "BATTERY", 0, 0);
    ui.totalMile  = Info_Create(cont, "0.0Km", "MILEAGE", 0, 60);
}

lv_obj_t* ScooterSysinfoView::Info_Create(lv_obj_t* obj, \
    const char* labelText, const char* labeltitleText, lv_coord_t x_ofs, \
    lv_coord_t y_ofs)
{
    lv_obj_t* cont = lv_obj_create(obj);
    lv_obj_remove_style_all(cont);
    lv_obj_set_style_bg_opa(cont, LV_OPA_COVER, 0);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0x000000), 0);
    lv_obj_set_size(cont, 110, 40);

    lv_obj_set_flex_flow(cont, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(
        cont,
        LV_FLEX_ALIGN_SPACE_AROUND,
        LV_FLEX_ALIGN_CENTER,
        LV_FLEX_ALIGN_CENTER
    );

    lv_obj_t* label_title = lv_label_create(cont);
    lv_obj_align(cont, LV_ALIGN_CENTER, x_ofs, y_ofs - 30);
    lv_obj_set_style_text_font(label_title, (lv_font_t*)&lv_font_montserrat_22, 0);
    lv_obj_set_style_text_color(label_title, lv_color_hex(0xffffff), 0);
    lv_label_set_text(label_title, labeltitleText);

    lv_obj_t* label = lv_label_create(cont);
    lv_obj_align(cont, LV_ALIGN_CENTER, x_ofs, y_ofs);
    lv_obj_set_style_text_font(label, (lv_font_t*)&lv_font_montserrat_22, 0);
    lv_obj_set_style_text_color(label, lv_color_hex(0xffffff), 0);
    lv_label_set_text(label, labelText);

    return label;
}

void ScooterSysinfoView::Ui_Update(uint8_t rem_bat, uint8_t rem_mile, \
			uint32_t total_mile)
{
    char temp_buf[32];
    sprintf(temp_buf, "%d%%", rem_bat);
		lv_label_set_text(ui.remainBat, temp_buf);
    sprintf(temp_buf, "%d Km", rem_mile);
		lv_label_set_text(ui.remainMile, temp_buf);
    sprintf(temp_buf, "%.1f Km", (float)total_mile/1000.0);
		lv_label_set_text(ui.totalMile, temp_buf);
}
