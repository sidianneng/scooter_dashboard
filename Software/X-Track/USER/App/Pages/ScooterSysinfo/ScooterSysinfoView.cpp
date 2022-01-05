#include "ScooterSysinfoView.h"
#include <stdarg.h>
#include <stdio.h>

using namespace Page;

void ScooterSysinfoView::Create(lv_obj_t* root)
{
    lv_obj_remove_style_all(root);
    
    lv_obj_set_size(root, LV_HOR_RES, LV_VER_RES);
    lv_obj_center(root);
    lv_obj_set_style_radius(root, LV_RADIUS_CIRCLE, 0);

    lv_obj_set_style_bg_color(root, lv_color_black(), 0);
    lv_obj_set_style_bg_opa(root, LV_OPA_COVER, 0);
    lv_obj_set_style_pad_ver(root, 70, 0);

    lv_obj_t* label = lv_label_create(root);
    lv_obj_remove_style_all(label);
    lv_obj_set_style_text_font(label, ResourcePool::GetFont("bahnschrift_17"), 0);
    lv_obj_set_style_text_color(label, lv_color_make(0xff, 0x00, 0x00), 0);
    lv_label_set_text(label, "2systeminfo");
    lv_obj_align(label, LV_ALIGN_TOP_MID, 0, 53);

}