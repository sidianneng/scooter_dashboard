#include "ScooterLock.h"

using namespace Page;

ScooterLock::ScooterLock()
    : timer(nullptr)
{
    locked = false;
}

ScooterLock::~ScooterLock()
{

}

void ScooterLock::onCustomAttrConfig()
{
    SetCustomLoadAnimType(PageManager::LOAD_ANIM_NONE, 1000, lv_anim_path_bounce);
}

void ScooterLock::onViewLoad()
{
    View.Create(root);
    //lv_label_set_text(View.ui.labelTitle, Name);

    AttachEvent(root);
    AttachEvent(View.ui.LockIcon);

    Model.TickSave = Model.GetData();
}

void ScooterLock::onViewDidLoad()
{

}

void ScooterLock::onViewWillAppear()
{
    Model.Init();
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
    Model.Deinit();
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

void ScooterLock::SetBtnRecImgSrc(const char* srcName)
{
    lv_obj_set_style_bg_img_src(View.ui.LockIcon, ResourcePool::GetImage(srcName), 0);
}

void ScooterLock::onEvent(lv_event_t* event)
{
    ScooterLock* instance = (ScooterLock*)lv_event_get_user_data(event);
    LV_ASSERT_NULL(instance);

    lv_obj_t* obj = lv_event_get_target(event);
    lv_event_code_t code = lv_event_get_code(event);

    if (obj == instance->root)
    {
        if (code == LV_EVENT_GESTURE && !instance->locked)
        {
            lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
            //printf("scooterlock gesture 0x%x 0x%x lck:%d\n", dir, lv_scr_act()->flags, instance->locked);
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

    if (obj == instance->View.ui.LockIcon)
    {
        if (code == LV_EVENT_LONG_PRESSED)
        {
            if (!instance->locked) {
                //printf("lock the scooter now\n");
                instance->SetBtnRecImgSrc("lock");
                instance->locked = true;
							  instance->Model.LockScooter();
            }
            else {
                //printf("unlock the scooter now\n");
                instance->SetBtnRecImgSrc("unlock");
                instance->locked = false;
                instance->Manager->Push("Pages/ScooterPwd");
            }
        }
    }
}
