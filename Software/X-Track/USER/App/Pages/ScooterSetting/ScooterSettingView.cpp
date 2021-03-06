#include "ScooterSettingView.h"
#include <stdarg.h>
#include <stdio.h>

using namespace Page;

void ScooterSettingView::Create(lv_obj_t* root)
{
    lv_obj_t* cont = lv_obj_create(root);
    lv_obj_remove_style_all(cont);
    lv_obj_set_size(cont, LV_HOR_RES, LV_VER_RES);

    //draw the circle panel
    lv_obj_center(cont);
    lv_obj_set_style_radius(cont, LV_RADIUS_CIRCLE, 0);
    lv_obj_set_style_bg_opa(cont, LV_OPA_COVER, 0);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0x000000), 0);

    cruise_Create(cont);
    energy_Create(cont);
    pwdset_Create(cont);
}

void ScooterSettingView::cruise_Create(lv_obj_t* root)
{
    //create label
    lv_obj_t* label = lv_label_create(root);
    lv_obj_align(label, LV_ALIGN_CENTER, -40, -60);
    lv_obj_set_style_text_font(label, (lv_font_t*)&lv_font_montserrat_22, 0);
    lv_obj_set_style_text_color(label, lv_color_hex(0xffffff), 0);
    lv_label_set_text(label, "Cruise:");
    ui.label_cruise = label;

    //creat switch
    lv_obj_t* sw = lv_switch_create(root);
    lv_obj_add_state(sw, LV_STATE_CHECKED);
    lv_obj_align(sw, LV_ALIGN_CENTER, 40, -60);
    lv_obj_set_size(sw, 60, 40);
    ui.cruise_check = sw;

    lv_obj_set_style_bg_img_src(ui.cruise_check, ResourcePool::GetImage("switch_on"), 0);
}

void ScooterSettingView::energy_Create(lv_obj_t* root)
{
    //create label
    lv_obj_t* label = lv_label_create(root);
    lv_obj_align(label, LV_ALIGN_CENTER, -40, 0);
    lv_obj_set_style_text_font(label, (lv_font_t*)&lv_font_montserrat_22, 0);
    lv_obj_set_style_text_color(label, lv_color_hex(0xffffff), 0);
    lv_label_set_text(label, "Energy:");
    ui.label_energy = label;

    //create the roller
    lv_obj_t* roller = lv_roller_create(root);
    lv_roller_set_options(roller,
        "Low\n"
        "Middle\n"
        "High",
        LV_ROLLER_MODE_INFINITE);

    lv_obj_set_style_text_font(roller, (lv_font_t*)&lv_font_montserrat_22, 0);
    lv_obj_set_style_text_color(roller, lv_color_hex(0xff0000), 0);
    lv_roller_set_visible_row_count(roller, 2);
    lv_roller_set_selected(roller, 0, LV_ANIM_ON);
    lv_obj_align(roller, LV_ALIGN_CENTER, 50, 0);

    ui.energy_dd = roller;
}

void ScooterSettingView::pwdset_Create(lv_obj_t* root)
{
    lv_obj_t* cont = lv_obj_create(root);
    lv_obj_remove_style_all(cont);
    lv_obj_set_size(cont, LV_HOR_RES, 40);
    lv_obj_set_style_bg_opa(cont, LV_OPA_COVER, 0);
    lv_obj_align(cont, LV_ALIGN_CENTER, 0, 70);
    lv_obj_set_style_bg_color(cont, lv_color_white(), 0);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0xbbbbbb), LV_STATE_PRESSED);

    lv_obj_t* label = lv_label_create(cont);
    lv_obj_set_style_text_font(label, (lv_font_t*)&lv_font_montserrat_22, 0);
    lv_label_set_text(label, "ConfigPwd");
    lv_obj_center(label);

    ui.config_pwd = cont;
}

void ScooterSettingView::Switch_UI_Update(bool state)
{
    if(!state)
        lv_obj_set_style_bg_img_src(ui.cruise_check, \
		        ResourcePool::GetImage("switch_on"), 0);
		else
        lv_obj_set_style_bg_img_src(ui.cruise_check, \
		        ResourcePool::GetImage("switch_on"), 0);
}

void ScooterSettingView::Roller_UI_Update(uint8_t state)
{
    lv_roller_set_selected(ui.energy_dd, state, LV_ANIM_ON);
}
