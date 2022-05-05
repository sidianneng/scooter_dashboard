#include "ScooterPwdCfgView.h"

using namespace Page;

void ScooterPwdCfgView::Create(lv_obj_t* root)
{
    lv_obj_t* cont = lv_obj_create(root);
    lv_obj_remove_style_all(cont);
    lv_obj_set_size(cont, LV_HOR_RES, LV_VER_RES);

    lv_obj_set_style_bg_opa(cont, LV_OPA_COVER, 0);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0x000000), 0);

    ui.curpwd_textarea = pwd_textarea_Create(cont, 50, -60, "cur pwd");
    ui.newpwd_textarea = pwd_textarea_Create(cont, 50, -30, "new pwd");
    ui.cfmpwd_textarea = pwd_textarea_Create(cont, 50, 0, "cfm pwd");
    ui.setpwd_button = btn_Create(cont, "YES", -40, 50);
    ui.cancel_button = btn_Create(cont, "BACK", 40, 50);
    ui.error_label = label_Create(cont, 0, 100);
}

lv_obj_t* ScooterPwdCfgView::pwd_textarea_Create(lv_obj_t* root, int8_t x_oft, int8_t y_oft,\
    const char* textarea_name)
{
    lv_obj_t* pwd_textarea = lv_textarea_create(root);
    lv_obj_set_style_bg_color(pwd_textarea, lv_color_hex(0xffffff), 0);
    lv_obj_set_style_bg_opa(pwd_textarea, LV_OPA_COVER, 0);
    lv_obj_set_style_text_font(pwd_textarea, (lv_font_t*)&lv_font_montserrat_22, 0);
    lv_textarea_set_password_mode(pwd_textarea, true);
    lv_textarea_set_one_line(pwd_textarea, true);
    lv_obj_set_width(pwd_textarea, lv_pct(40));
    lv_obj_align(pwd_textarea, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_pos(pwd_textarea, x_oft, y_oft);

    lv_obj_t* pwd_label = lv_label_create(root);
    lv_obj_set_style_text_color(pwd_label, lv_color_hex(0xffffff), 0);
    lv_obj_set_style_text_font(pwd_label, (lv_font_t*)&lv_font_montserrat_22, 0);
    lv_label_set_text(pwd_label, textarea_name);
    lv_obj_align_to(pwd_label, pwd_textarea, LV_ALIGN_OUT_LEFT_MID, -10, 0);

    return pwd_textarea;
}

lv_obj_t* ScooterPwdCfgView::btn_Create(lv_obj_t* root, const char* btn_name, int8_t x_oft, \
    int8_t y_oft)
{
    lv_obj_t* cont = lv_obj_create(root);
    lv_obj_remove_style_all(cont);
    lv_obj_set_size(cont, 70, 40);
    lv_obj_set_style_bg_opa(cont, LV_OPA_COVER, 0);
    lv_obj_align(cont, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_bg_color(cont, lv_color_white(), 0);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0xbbbbbb), LV_STATE_PRESSED);

    lv_obj_set_pos(cont, x_oft, y_oft);

    lv_obj_t* label = lv_label_create(cont);
    lv_obj_set_style_text_font(label, (lv_font_t*)&lv_font_montserrat_22, 0);
    lv_label_set_text(label, btn_name);
    lv_obj_center(label);

    return cont;
}

lv_obj_t* ScooterPwdCfgView::label_Create(lv_obj_t* root, int8_t x_oft, int8_t y_oft)
{
    lv_obj_t* label = lv_label_create(root);
    lv_obj_remove_style_all(label);
    lv_obj_set_size(label, 120, 40);
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_text_color(label, lv_color_hex(0xff0000), 0);
    lv_obj_set_style_text_font(label, ResourcePool::GetFont("bahnschrift_17"), 0);
    lv_label_set_text(label, "");
    lv_obj_center(label);

    lv_obj_set_pos(label, x_oft, y_oft);

    return label;
}

void ScooterPwdCfgView::label_update(const char* buf)
{
    lv_label_set_text(ui.error_label, buf);
}


