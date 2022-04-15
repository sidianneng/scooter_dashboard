#include "ScooterLockView.h"
#include <stdarg.h>
#include <stdio.h>

using namespace Page;

void ScooterLockView::Create(lv_obj_t* root)
{
    lv_obj_remove_style_all(root);
    lv_obj_set_size(root, LV_HOR_RES, LV_VER_RES);

    BtnCont_Create(root);
}

void ScooterLockView::BtnCont_Create(lv_obj_t* par)
{
    lv_obj_t* cont = lv_obj_create(par);
    lv_obj_remove_style_all(cont);
    lv_obj_set_size(cont, LV_HOR_RES, LV_VER_RES);

    ui.cont = cont;

    ui.LockIcon = Btn_Create(cont, ResourcePool::GetImage("unlock"), 0);
}

lv_obj_t* ScooterLockView::Btn_Create(lv_obj_t* par, const void* img_src, lv_coord_t x_ofs)
{
    lv_obj_t* obj = lv_obj_create(par);
    lv_obj_remove_style_all(obj);
    lv_obj_set_size(obj, LV_HOR_RES, LV_VER_RES);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_align(obj, LV_ALIGN_CENTER, x_ofs, 0);
    lv_obj_set_style_bg_img_src(obj, img_src, 0);

    lv_obj_set_style_bg_opa(obj, LV_OPA_COVER, 0);
    lv_obj_set_style_width(obj, LV_HOR_RES, LV_STATE_PRESSED);
    lv_obj_set_style_height(obj, LV_VER_RES, LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0x0), 0);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0x0), LV_STATE_PRESSED);

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
