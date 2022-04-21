#include "ScooterPwdCfgView.h"

using namespace Page;

void ScooterPwdCfgView::Create(lv_obj_t* root)
{
    lv_obj_t* cont = lv_obj_create(root);
    lv_obj_remove_style_all(cont);
    lv_obj_set_size(cont, LV_HOR_RES, LV_VER_RES);

    lv_obj_set_style_bg_opa(cont, LV_OPA_COVER, 0);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0x000000), 0);

    ui.curpwd_textarea = pwd_textarea_Create(cont, 50, -90, "cur pwd");
    ui.newpwd_textarea = pwd_textarea_Create(cont, 50, -60, "new pwd");
    ui.cfmpwd_textarea = pwd_textarea_Create(cont, 50, -30, "cfm pwd");
    ui.setpwd_button = btn_Create(cont, "YES", -40, 20);
    ui.cancel_button = btn_Create(cont, "NO", 40, 20);
}

lv_obj_t* ScooterPwdCfgView::pwd_textarea_Create(lv_obj_t* root, int8_t x_oft, int8_t y_oft,\
    const char* textarea_name)
{
    lv_obj_t* pwd_textarea = lv_textarea_create(root);
    lv_obj_set_style_bg_color(pwd_textarea, lv_color_hex(0xffffff), 0);
    lv_obj_set_style_bg_opa(pwd_textarea, LV_OPA_COVER, 0);
    lv_obj_set_style_text_font(pwd_textarea, (lv_font_t*)&lv_font_montserrat_22, 0);
    lv_textarea_set_password_mode(pwd_textarea, false);
    lv_textarea_set_one_line(pwd_textarea, true);
    lv_obj_set_width(pwd_textarea, lv_pct(40));
    lv_obj_align(pwd_textarea, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_pos(pwd_textarea, x_oft, y_oft);

    lv_obj_t* pwd_label = lv_label_create(root);
    lv_obj_set_style_text_color(pwd_label, lv_color_hex(0xff0000), 0);
    lv_obj_set_style_text_font(pwd_label, (lv_font_t*)&lv_font_montserrat_22, 0);
    lv_label_set_text(pwd_label, textarea_name);
    //lv_obj_set_style_bg_opa(pwd_label, LV_OPA_COVER, 0);
    lv_obj_align_to(pwd_label, pwd_textarea, LV_ALIGN_OUT_LEFT_MID, -10, 0);

    return pwd_textarea;
}

lv_obj_t* ScooterPwdCfgView::btn_Create(lv_obj_t* root, const char* btn_name, int8_t x_oft, \
    int8_t y_oft)
{
    lv_obj_t* cont = lv_obj_create(root);
    lv_obj_remove_style_all(cont);
    lv_obj_set_size(cont, 60, 40);
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