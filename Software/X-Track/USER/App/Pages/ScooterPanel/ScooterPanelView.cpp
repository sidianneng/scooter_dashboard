#include "ScooterPanelView.h"
#include <stdarg.h>
#include <stdio.h>

using namespace Page;

void ScooterPanelView::Create(lv_obj_t* root)
{
    lv_obj_t* cont = lv_obj_create(root);
    lv_obj_remove_style_all(cont);

    //draw the circle panel
    lv_obj_set_size(cont, 240, 240);
    lv_obj_center(cont);
    lv_obj_set_style_radius(cont, LV_RADIUS_CIRCLE, 0);

    lv_obj_set_style_bg_opa(cont, LV_OPA_COVER, 0);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0x000000), 0);

    //create items
    PanelInfo_Create(cont);
    //Button_Create(root);
}

void ScooterPanelView::PanelInfo_Create(lv_obj_t* par)
{
    lv_obj_t* cont = lv_obj_create(par);
    lv_obj_center(cont);
    lv_obj_set_size(cont, LV_HOR_RES, 180);

    //speed number
    lv_obj_t* label = lv_label_create(cont);
    lv_obj_set_style_text_font(label, ResourcePool::GetFont("bahnschrift_72"), 0);
    lv_obj_set_style_text_color(label, lv_color_white(), 0);
    lv_label_set_text(label, "88");
    lv_obj_align(label, LV_ALIGN_TOP_MID, 0, 30);

    //draw all the icons
    ui.panelInfo.labelBat1 = Icon_Create(cont, ResourcePool::GetImage("battery1"), -90, 23);
    ui.panelInfo.labelBat2 = Icon_Create(cont, ResourcePool::GetImage("battery2"), -50, 25);
    ui.panelInfo.labelBat3 = Icon_Create(cont, ResourcePool::GetImage("battery3"), -10, 25);
    ui.panelInfo.labelBat4 = Icon_Create(cont, ResourcePool::GetImage("battery4"), 30, 25);
    ui.panelInfo.labelBat5 = Icon_Create(cont, ResourcePool::GetImage("battery5"), 70, 25);

    ui.panelInfo.labelCharging = Icon_Create(cont, ResourcePool::GetImage("charging"), 100, 20);

    ui.panelInfo.labelBluetooth = Icon_Create(cont, ResourcePool::GetImage("bluetooth"), -80, -20);

    ui.panelInfo.labelWrench = Icon_Create(cont, ResourcePool::GetImage("wrench"), -80, -60);

    ui.panelInfo.labelTemperature = Icon_Create(cont, ResourcePool::GetImage("temperature"), 65, -60);

    ui.panelInfo.labelSptMode_r = Icon_Create(cont, ResourcePool::GetImage("sptmode_r"), 80, -30);

    ui.panelInfo.labelKmh = Icon_Create(cont, ResourcePool::GetImage("kmh"), 80, -10);

    ui.panelInfo.labelMph = Icon_Create(cont, ResourcePool::GetImage("mph"), 65, 5);

    ui.panelInfo.cont = cont;
}

void ScooterPanelView::Button_Create(lv_obj_t* par)
{
    lv_obj_t* cont = lv_obj_create(par);
    lv_obj_remove_style_all(cont);
    lv_obj_set_size(cont, LV_HOR_RES, 60);
    lv_obj_align_to(cont, ui.panelInfo.cont, LV_ALIGN_OUT_BOTTOM_MID, 0, 0);

    ui.btnCont.btnPower = Btn_Create(cont, ResourcePool::GetImage("start"), 0);
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

lv_obj_t* ScooterPanelView::Icon_Create(lv_obj_t* par, const void* img_src, lv_coord_t x_ofs, lv_coord_t y_ofs)
{
    lv_obj_t* obj = lv_obj_create(par);

    lv_obj_align(obj, LV_ALIGN_CENTER, x_ofs, y_ofs);
    lv_obj_set_style_bg_img_src(obj, img_src, 0);

    return obj;
}