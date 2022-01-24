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
}

static void event_handler_sw(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* obj = lv_event_get_target(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        LV_LOG_USER("Cruise State: %s\n", lv_obj_has_state(obj, LV_STATE_CHECKED) ? "On" : "Off");
    }
}

void ScooterSettingView::cruise_Create(lv_obj_t* root)
{
    //create label
    lv_obj_t* label = lv_label_create(root);
    lv_obj_align(label, LV_ALIGN_CENTER, -50, -50);
    lv_obj_set_style_text_font(label, ResourcePool::GetFont("bahnschrift_13"), 0);
    lv_obj_set_style_text_color(label, lv_color_hex(0xff0000), 0);
    lv_label_set_text(label, "Cruise:");
    ui.label_cruise = label;

    //creat switch
    lv_obj_t* sw = lv_switch_create(root);
    lv_obj_add_state(sw, LV_STATE_CHECKED);
    lv_obj_align(sw, LV_ALIGN_CENTER, 50, -50);
    lv_obj_add_event_cb(sw, event_handler_sw, LV_EVENT_ALL, NULL);
    ui.cruise_check = sw;
}

static void event_handler(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* obj = lv_event_get_target(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));
        LV_LOG_USER("Selected mode: %s\n", buf);
    }
}

void ScooterSettingView::energy_Create(lv_obj_t* root)
{
    //create label
    lv_obj_t* label = lv_label_create(root);
    lv_obj_align(label, LV_ALIGN_CENTER, -50, 50);
    lv_obj_set_style_text_font(label, ResourcePool::GetFont("bahnschrift_13"), 0);
    lv_obj_set_style_text_color(label, lv_color_hex(0xff0000), 0);
    lv_label_set_text(label, "Energy:");
    ui.label_energy = label;

    //create the roller
    lv_obj_t* roller = lv_roller_create(root);
    lv_roller_set_options(roller,
        "Close\n"
        "Low\n"
        "Middle\n"
        "High",
        LV_ROLLER_MODE_INFINITE);

    lv_obj_set_style_text_font(roller, ResourcePool::GetFont("bahnschrift_17"), 0);
    lv_obj_set_style_text_color(roller, lv_color_hex(0xff0000), 0);
    lv_roller_set_visible_row_count(roller, 2);
    lv_obj_align(roller, LV_ALIGN_CENTER, 50, 50);
    lv_obj_add_event_cb(roller, event_handler, LV_EVENT_ALL, NULL);
    ui.energy_dd = roller;
}