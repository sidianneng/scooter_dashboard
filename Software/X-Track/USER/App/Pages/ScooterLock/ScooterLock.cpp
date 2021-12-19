#include "ScooterLock.h"

using namespace Page;

ScooterLock::ScooterLock()
    : timer(nullptr)
{
}

ScooterLock::~ScooterLock()
{

}

void ScooterLock::onCustomAttrConfig()
{
    SetCustomCacheEnable(true);
    SetCustomLoadAnimType(PageManager::LOAD_ANIM_NONE, 1000, lv_anim_path_bounce);
}

void ScooterLock::onViewLoad()
{
    View.Create(root);
    //lv_label_set_text(View.ui.labelTitle, Name);

    AttachEvent(root);

    Model.TickSave = Model.GetData();
}

void ScooterLock::onViewDidLoad()
{

}

void ScooterLock::onViewWillAppear()
{
    Param_t param;
    param.color = lv_color_white();
    param.time = 1000;

    PAGE_STASH_POP(param);

    lv_obj_set_style_bg_color(root, param.color, LV_PART_MAIN);
    timer = lv_timer_create(onTimerUpdate, param.time, this);
}

void ScooterLock::onViewDidAppear()
{

}

void ScooterLock::onViewWillDisappear()
{

}

void ScooterLock::onViewDidDisappear()
{
    lv_timer_del(timer);
}

void ScooterLock::onViewDidUnload()
{

}

void ScooterLock::AttachEvent(lv_obj_t* obj)
{
    lv_obj_set_user_data(obj, this);
    lv_obj_add_event_cb(obj, onEvent, LV_EVENT_ALL, this);
}

void ScooterLock::Update()
{
    //lv_label_set_text_fmt(View.ui.labelTick, "tick = %d save = %d", Model.GetData(), Model.TickSave);
}

void ScooterLock::onTimerUpdate(lv_timer_t* timer)
{
    ScooterLock* instance = (ScooterLock*)timer->user_data;

    instance->Update();
}

void ScooterLock::onEvent(lv_event_t* event)
{
    ScooterLock* instance = (ScooterLock*)lv_event_get_user_data(event);
    LV_ASSERT_NULL(instance);

    lv_obj_t* obj = lv_event_get_target(event);
    lv_event_code_t code = lv_event_get_code(event);

    if (obj == instance->root)
    {
        if (code == LV_EVENT_GESTURE)
        {
            lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
            printf("scooterlock gesture 0x%x 0x%x\n", dir, lv_scr_act()->flags);
            if (lv_scr_act()->flags & LV_OBJ_FLAG_USER_1) {
                if (dir == LV_DIR_RIGHT) {
                    
                    instance->Manager->BackHome();
                    lv_scr_act()->flags &= ~LV_OBJ_FLAG_USER_1;//clear the bit with spicify the direction
                }
                else if (dir == LV_DIR_LEFT) {
                    instance->Manager->Pop();
                }
            }
            else {
                if (dir == LV_DIR_RIGHT) {
                    instance->Manager->BackHome();
                    lv_scr_act()->flags &= ~LV_OBJ_FLAG_USER_1;//clear the bit with spicify the direction
                }
                else if (dir == LV_DIR_LEFT) {
                    instance->Manager->Push("Pages/ScooterSysinfo");
                }
            }
        }
    }
}
