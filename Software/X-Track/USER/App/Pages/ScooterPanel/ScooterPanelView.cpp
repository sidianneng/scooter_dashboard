#include "ScooterPanelView.h"
#include <stdarg.h>
#include <stdio.h>

using namespace Page;

void ScooterPanelView::Create(lv_obj_t* root)
{
    PanelInfo_Create(root);
    Button_Create(root);
}

void ScooterPanelView::PanelInfo_Create(lv_obj_t* par)
{
    lv_obj_t* cont = lv_obj_create(par);
    lv_obj_remove_style_all(cont);

    lv_obj_set_size(cont, 240, 240);
    lv_obj_center(cont);
    lv_obj_set_style_radius(cont, LV_RADIUS_CIRCLE, 0);

    //lv_obj_set_size(cont, LV_HOR_RES, 180);

    lv_obj_set_style_bg_opa(cont, LV_OPA_COVER, 0);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0x333333), 0);

    //speed number
    lv_obj_t* label = lv_label_create(cont);
    lv_obj_set_style_text_font(label, ResourcePool::GetFont("bahnschrift_72"), 0);
    lv_obj_set_style_text_color(label, lv_color_white(), 0);
    lv_label_set_text(label, "88");
    lv_obj_align(label, LV_ALIGN_TOP_MID, 0, 53);
#if 0
    //battery capacity
    lv_obj_t* label_capicity = lv_label_create(cont);
    lv_obj_set_style_text_font(label_capicity, ResourcePool::GetFont("bahnschrift_32"), 0);
    lv_obj_set_style_text_color(label_capicity, lv_color_white(), 0);
    lv_label_set_text(label_capicity, "99");
    lv_obj_align(label_capicity, LV_ALIGN_TOP_MID, 0, 133);

    //bluetooth
    lv_obj_t* label_ble = lv_label_create(cont);
    lv_obj_set_style_text_font(label_ble, ResourcePool::GetFont("bahnschrift_32"), 0);
    lv_obj_set_style_text_color(label_ble, lv_color_white(), 0);
    lv_label_set_text(label_ble, "1");
    lv_obj_align(label_ble, LV_ALIGN_TOP_MID, -100, 133);

    //needfix
    lv_obj_t* label_fix = lv_label_create(cont);
    lv_obj_set_style_text_font(label_fix, ResourcePool::GetFont("bahnschrift_32"), 0);
    lv_obj_set_style_text_color(label_fix, lv_color_white(), 0);
    lv_label_set_text(label_fix, "2");
    lv_obj_align(label_fix, LV_ALIGN_TOP_MID, -70, 53);

    //temperate icon
    lv_obj_t* label_temp = lv_label_create(cont);
    lv_obj_set_style_text_font(label_temp, ResourcePool::GetFont("bahnschrift_32"), 0);
    lv_obj_set_style_text_color(label_temp, lv_color_white(), 0);
    lv_label_set_text(label_temp, "3");
    lv_obj_align(label_temp, LV_ALIGN_TOP_MID, 70, 53);

    //sport mode
    lv_obj_t* label_mode = lv_label_create(cont);
    lv_obj_set_style_text_font(label_mode, ResourcePool::GetFont("bahnschrift_32"), 0);
    lv_obj_set_style_text_color(label_mode, lv_color_white(), 0);
    lv_label_set_text(label_mode, "4");
    lv_obj_align(label_mode, LV_ALIGN_TOP_MID, 100, 133);
#endif
    ui.panelInfo.cont = cont;
}

void ScooterPanelView::Button_Create(lv_obj_t* par)
{
    lv_obj_t* cont = lv_obj_create(par);
    lv_obj_remove_style_all(cont);
    lv_obj_set_size(cont, LV_HOR_RES, 60);
    lv_obj_align_to(cont, ui.panelInfo.cont, LV_ALIGN_OUT_BOTTOM_MID, 0, 0);

    //ui.btnCont.btnPower = Btn_Create(cont, ResourcePool::GetImage("start"), 0);
}

lv_obj_t* ScooterPanelView::Btn_Create(lv_obj_t* par, const void* img_src, lv_coord_t x_ofs)
{
    lv_obj_t* obj = lv_obj_create(par);
    lv_obj_remove_style_all(obj);
    lv_obj_set_size(obj, 240, 60);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_align(obj, LV_ALIGN_CENTER, x_ofs, 0);
    lv_obj_set_style_bg_img_src(obj, img_src, 0);

    lv_obj_set_style_bg_opa(obj, LV_OPA_COVER, 0);
    lv_obj_set_style_width(obj, 240, LV_STATE_PRESSED);
    lv_obj_set_style_height(obj, 60, LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0x666666), 0);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xbbbbbb), LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xff931e), LV_STATE_FOCUSED);

    static lv_style_transition_dsc_t tran;
    static const lv_style_prop_t prop[] = { LV_STYLE_WIDTH, LV_STYLE_HEIGHT, LV_STYLE_PROP_INV };
    lv_style_transition_dsc_init(
        &tran,
        prop,
        lv_anim_path_ease_out,
        200,
        0,
        nullptr
    );
    lv_obj_set_style_transition(obj, &tran, LV_STATE_PRESSED);
    lv_obj_set_style_transition(obj, &tran, LV_STATE_FOCUSED);

    lv_obj_update_layout(obj);

    return obj;
}
