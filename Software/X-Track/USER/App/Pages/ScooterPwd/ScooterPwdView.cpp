#include "ScooterPwdView.h"
#include <stdarg.h>
#include <stdio.h>

using namespace Page;

void ScooterPwdView::Create(lv_obj_t* root)
{
    lv_obj_t* cont = lv_obj_create(root);
    lv_obj_remove_style_all(cont);
    lv_obj_set_size(cont, LV_HOR_RES, LV_VER_RES);

    lv_obj_set_style_bg_opa(cont, LV_OPA_COVER, 0);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0x000000), 0);

    ui.cont = root;

    ui.textarea = Pwd_Textarea_Create(root);
    ui.keyboard = Pwd_Keyboard_Create(root);
}

lv_obj_t* ScooterPwdView::Pwd_Textarea_Create(lv_obj_t* root)
{
    lv_obj_t* ta = lv_textarea_create(root);
    lv_obj_set_style_text_font(ta, (lv_font_t*)&lv_font_montserrat_22, 0);
    lv_obj_set_style_text_color(ta, lv_color_hex(0xffffff), 0);
    lv_textarea_set_password_mode(ta, true);
    lv_textarea_set_one_line(ta, true);
    lv_obj_align(ta, LV_ALIGN_TOP_MID, 100, 10);
    lv_obj_add_state(ta, LV_STATE_FOCUSED); /*To be sure the cursor is visible*/

    return ta;
}

lv_obj_t* ScooterPwdView::Pwd_Keyboard_Create(lv_obj_t* root)
{
    static const char* btnm_map[] = { "1", "2", "3", "\n",
                           "4", "5", "6", "\n",
                           "7", "8", "9", "\n",
                           LV_SYMBOL_BACKSPACE, "0", LV_SYMBOL_NEW_LINE, "" };

    lv_obj_t* btnm = lv_btnmatrix_create(root);
    lv_obj_set_style_text_color(btnm, lv_color_hex(0xffffff), 0);
    lv_obj_set_style_text_font(btnm, (lv_font_t*)&lv_font_montserrat_22, 0);
    lv_obj_set_size(btnm, 200, 150);
    lv_obj_align(btnm, LV_ALIGN_BOTTOM_MID, 0, -10);
    lv_obj_clear_flag(btnm, LV_OBJ_FLAG_CLICK_FOCUSABLE); /*To keep the text area focused on button clicks*/
    lv_btnmatrix_set_map(btnm, btnm_map);

    return btnm;
}
