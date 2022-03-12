#include "ScooterSysinfo.h"

using namespace Page;

ScooterSysinfo::ScooterSysinfo()
    : timer(nullptr)
{
}

ScooterSysinfo::~ScooterSysinfo()
{

}

void ScooterSysinfo::onCustomAttrConfig()
{
    SetCustomCacheEnable(true);
    SetCustomLoadAnimType(PageManager::LOAD_ANIM_NONE, 1000, lv_anim_path_bounce);
}

void ScooterSysinfo::onViewLoad()
{
    View.Create(root);
    //lv_label_set_text(View.ui.labelTitle, Name);

    AttachEvent(root);

    Model.TickSave = Model.GetData();
}

void ScooterSysinfo::onViewDidLoad()
{

}

void ScooterSysinfo::onViewWillAppear()
{
    Param_t param;
    param.color = lv_color_white();
    param.time = 1000;

    PAGE_STASH_POP(param);

    lv_obj_set_style_bg_color(root, param.color, LV_PART_MAIN);
    timer = lv_timer_create(onTimerUpdate, param.time, this);
}

void ScooterSysinfo::onViewDidAppear()
{

}

void ScooterSysinfo::onViewWillDisappear()
{

}

void ScooterSysinfo::onViewDidDisappear()
{
    lv_timer_del(timer);
}

void ScooterSysinfo::onViewDidUnload()
{

}

void ScooterSysinfo::AttachEvent(lv_obj_t* obj)
{
    lv_obj_set_user_data(obj, this);
    lv_obj_add_event_cb(obj, onEvent, LV_EVENT_ALL, this);
}

void ScooterSysinfo::Update()
{
    //lv_label_set_text_fmt(View.ui.labelTick, "tick = %d save = %d", Model.GetData(), Model.TickSave);
}

void ScooterSysinfo::onTimerUpdate(lv_timer_t* timer)
{
    ScooterSysinfo* instance = (ScooterSysinfo*)timer->user_data;

    instance->Update();
}

void ScooterSysinfo::onEvent(lv_event_t* event)
{
    ScooterSysinfo* instance = (ScooterSysinfo*)lv_event_get_user_data(event);
    LV_ASSERT_NULL(instance);

    lv_obj_t* obj = lv_event_get_target(event);
    lv_event_code_t code = lv_event_get_code(event);

    if (obj == instance->root)
    {
        if (code == LV_EVENT_GESTURE)
        {
            lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
            //printf("scootersysinfo gesture 0x%x 0x%x\n", dir, lv_scr_act()->flags);
            if (lv_scr_act()->flags & LV_OBJ_FLAG_USER_1) {
            //if (0) {
                if (dir == LV_DIR_RIGHT) {
                    instance->Manager->Push("Pages/ScooterLock");
                }
                else if (dir == LV_DIR_LEFT) {
                    instance->Manager->Pop();
                }
            }
            else {
                if (dir == LV_DIR_RIGHT) {
                    instance->Manager->Pop();
                }
                else if (dir == LV_DIR_LEFT) {
                    instance->Manager->Push("Pages/ScooterSetting");
                }
            }
        }
    }
}
