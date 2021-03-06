#include "ScooterPanelView.h"
#include <stdarg.h>
#include <stdio.h>

using namespace Page;

void ScooterPanelView::Create(lv_obj_t* root)
{
    lv_obj_remove_style_all(root);
    lv_obj_set_size(root, LV_HOR_RES, LV_VER_RES);

    //create items
    PanelInfo_Create(root);
    Button_Create(root);
}

void ScooterPanelView::PanelInfo_Create(lv_obj_t* par)
{
    lv_obj_t* cont = lv_obj_create(par);
    lv_obj_remove_style_all(cont);
    lv_obj_center(cont);
    lv_obj_set_size(cont, LV_HOR_RES, 160);
    lv_obj_set_style_bg_opa(cont, LV_OPA_COVER, 0);
    lv_obj_set_style_bg_color(cont, lv_color_black(), 0);
    lv_obj_align(cont, LV_ALIGN_TOP_MID, 0, 0);

    ui.panelInfo.cont = cont;

    //speed number
    lv_obj_t* label = lv_label_create(cont);
    lv_obj_set_style_text_font(label, ResourcePool::GetFont("bahnschrift_72"), 0);
    lv_obj_set_style_text_color(label, lv_color_white(), 0);
    lv_label_set_text(label, "88");
    lv_obj_align(label, LV_ALIGN_TOP_MID, 0, 75);
    ui.panelInfo.labelSpeed = label;

    //draw all the icons
    ui.panelInfo.labelBat1 = Icon_Create(cont, ResourcePool::GetImage("battery1"), -90, 68);
    ui.panelInfo.labelBat2 = Icon_Create(cont, ResourcePool::GetImage("battery2"), -50, 70);
    ui.panelInfo.labelBat3 = Icon_Create(cont, ResourcePool::GetImage("battery3"), -10, 70);
    ui.panelInfo.labelBat4 = Icon_Create(cont, ResourcePool::GetImage("battery4"), 30, 70);
    ui.panelInfo.labelBat5 = Icon_Create(cont, ResourcePool::GetImage("battery5"), 70, 70);

    ui.panelInfo.labelCharging = Icon_Create(cont, ResourcePool::GetImage("charging"), 100, 65);

    ui.panelInfo.labelBluetooth = Icon_Create(cont, ResourcePool::GetImage("bluetooth"), -80, 25);

    ui.panelInfo.labelWrench = Icon_Create(cont, ResourcePool::GetImage("wrench"), -80, -20);

    ui.panelInfo.labelTemperature = Icon_Create(cont, ResourcePool::GetImage("temperature"), 80, -20);

    ui.panelInfo.labelSptMode = Icon_Create(cont, ResourcePool::GetImage("sptmode_r"), 80, 15);

    ui.panelInfo.labelSpdUint = Icon_Create(cont, ResourcePool::GetImage("kmh"), 80, 40);

    ui.panelInfo.cont = cont;
}

void ScooterPanelView::Button_Create(lv_obj_t* par)
{
    lv_obj_t* cont = lv_obj_create(par);
    lv_obj_remove_style_all(cont);
    lv_obj_set_size(cont, LV_HOR_RES, 80);
    lv_obj_align_to(cont, ui.panelInfo.cont, LV_ALIGN_OUT_BOTTOM_MID, 0, 0);

    ui.btnCont.btnPower = Btn_Create(cont, ResourcePool::GetImage("power_key"), 0);
}

lv_obj_t* ScooterPanelView::Btn_Create(lv_obj_t* par, const void* img_src, lv_coord_t x_ofs)
{
    lv_obj_t* obj = lv_obj_create(par);
    lv_obj_remove_style_all(obj);
    lv_obj_set_size(obj, 240, 80);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_align(obj, LV_ALIGN_CENTER, x_ofs, 0);
    lv_obj_set_style_bg_img_src(obj, img_src, 0);

    lv_obj_set_style_bg_opa(obj, LV_OPA_COVER, 0);
    lv_obj_set_style_width(obj, 240, LV_STATE_PRESSED);
    lv_obj_set_style_height(obj, 80, LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(obj, lv_color_black(), 0);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xbbbbbb), LV_STATE_PRESSED);
    //lv_obj_set_style_bg_color(obj, lv_color_hex(0xff931e), LV_STATE_FOCUSED);

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
    lv_obj_remove_style_all(obj);
    lv_obj_set_size(obj, 40, 40);

    lv_obj_align(obj, LV_ALIGN_CENTER, x_ofs, y_ofs);
    lv_obj_set_style_bg_img_src(obj, img_src, 0);

    return obj;
}

void ScooterPanelView::Update_Bat_Icon(uint8_t battery)
{
    char image_name_buf[32];

    for (uint8_t i = 0; i < 5; ++i)
    {
        if (battery & 0x01)
            sprintf(image_name_buf, "battery%d", i + 1);
        else 
            sprintf(image_name_buf, "transparent_bg");

        if(i == 0)
            lv_obj_set_style_bg_img_src(ui.panelInfo.labelBat1, ResourcePool::GetImage(image_name_buf), 0);
        else if(i == 1)
            lv_obj_set_style_bg_img_src(ui.panelInfo.labelBat2, ResourcePool::GetImage(image_name_buf), 0);
        else if (i == 2)
            lv_obj_set_style_bg_img_src(ui.panelInfo.labelBat3, ResourcePool::GetImage(image_name_buf), 0);
        else if (i == 3)
            lv_obj_set_style_bg_img_src(ui.panelInfo.labelBat4, ResourcePool::GetImage(image_name_buf), 0);
        else if (i == 4)
            lv_obj_set_style_bg_img_src(ui.panelInfo.labelBat5, ResourcePool::GetImage(image_name_buf), 0);

        battery >>= 1;
    }
}

void ScooterPanelView::Update_Other_Icons(uint32_t icons)
{
	char icon_name_buf[32];
	
	if(icons & 0x00800000)
		sprintf(icon_name_buf, "wrench");
	else
		sprintf(icon_name_buf, "transparent_bg");
	lv_obj_set_style_bg_img_src(ui.panelInfo.labelWrench, ResourcePool::GetImage(icon_name_buf), 0);
		
	if(icons & 0x00008000)
		sprintf(icon_name_buf, "temperature");
	else
		sprintf(icon_name_buf, "transparent_bg");
	lv_obj_set_style_bg_img_src(ui.panelInfo.labelTemperature, ResourcePool::GetImage(icon_name_buf), 0);
	
	if(icons & 0x00000080)
		sprintf(icon_name_buf, "sptmode_r");
	else if(icons & 0x00000001)
		sprintf(icon_name_buf, "sptmode_b");
    else
		sprintf(icon_name_buf, "transparent_bg");
	lv_obj_set_style_bg_img_src(ui.panelInfo.labelSptMode, ResourcePool::GetImage(icon_name_buf), 0);
	
	if(icons & 0x00000002)
		sprintf(icon_name_buf, "kmh");
	else if(icons & 0x00000010)
		sprintf(icon_name_buf, "mph");
    else
		sprintf(icon_name_buf, "transparent_bg_small");
	lv_obj_set_style_bg_img_src(ui.panelInfo.labelSpdUint, ResourcePool::GetImage(icon_name_buf), 0);
	
	if(icons & 0x00000008)
		sprintf(icon_name_buf, "charging");
	else
		sprintf(icon_name_buf, "transparent_bg_small");
	lv_obj_set_style_bg_img_src(ui.panelInfo.labelCharging, ResourcePool::GetImage(icon_name_buf), 0);
	
	if(icons & 0x00000004)
		sprintf(icon_name_buf, "bluetooth");
	else
		sprintf(icon_name_buf, "transparent_bg");
	lv_obj_set_style_bg_img_src(ui.panelInfo.labelBluetooth, ResourcePool::GetImage(icon_name_buf), 0);
}
