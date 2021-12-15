#include "ScooterPanel.h"

using namespace Page;

ScooterPanel::ScooterPanel()
    : timer(nullptr)
{
}

ScooterPanel::~ScooterPanel()
{

}

void ScooterPanel::onCustomAttrConfig()
{
    SetCustomCacheEnable(true);
    SetCustomLoadAnimType(PageManager::LOAD_ANIM_NONE, 1000, lv_anim_path_bounce);
}

void ScooterPanel::onViewLoad()
{
    View.Create(root);
    //lv_label_set_text(View.ui.labelTitle, Name);

    AttachEvent(root);

    Model.TickSave = Model.GetData();
}

void ScooterPanel::onViewDidLoad()
{

}

void ScooterPanel::onViewWillAppear()
{
    Param_t param;
    param.color = lv_color_white();
    param.time = 1000;

    PAGE_STASH_POP(param);

    lv_obj_set_style_bg_color(root, param.color, LV_PART_MAIN);
    timer = lv_timer_create(onTimerUpdate, param.time, this);
}

void ScooterPanel::onViewDidAppear()
{

}

void ScooterPanel::onViewWillDisappear()
{

}

void ScooterPanel::onViewDidDisappear()
{
    lv_timer_del(timer);
}

void ScooterPanel::onViewDidUnload()
{

}

void ScooterPanel::AttachEvent(lv_obj_t* obj)
{
    lv_obj_set_user_data(obj, this);
    lv_obj_add_event_cb(obj, onEvent, LV_EVENT_ALL, this);
}

void ScooterPanel::Update()
{
    //lv_label_set_text_fmt(View.ui.labelTick, "tick = %d save = %d", Model.GetData(), Model.TickSave);
}

void ScooterPanel::onTimerUpdate(lv_timer_t* timer)
{
    ScooterPanel* instance = (ScooterPanel*)timer->user_data;

    instance->Update();
}

void ScooterPanel::onEvent(lv_event_t* event)
{
    ScooterPanel* instance = (ScooterPanel*)lv_event_get_user_data(event);
    LV_ASSERT_NULL(instance);

    lv_obj_t* obj = lv_event_get_target(event);
    lv_event_code_t code = lv_event_get_code(event);

    if (obj == instance->root)
    {
        if (code == LV_EVENT_SHORT_CLICKED || code == LV_EVENT_LEAVE)
        {
            instance->Manager->Pop();
        }
    }
}
