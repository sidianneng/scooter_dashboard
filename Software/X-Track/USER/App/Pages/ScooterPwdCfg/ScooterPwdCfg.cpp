#include "ScooterPwdCfg.h"

using namespace Page;

ScooterPwdCfg::ScooterPwdCfg() : timer(nullptr)
{

}

ScooterPwdCfg::~ScooterPwdCfg()
{

}

void ScooterPwdCfg::onCustomAttrConfig()
{
    SetCustomLoadAnimType(PageManager::LOAD_ANIM_NONE, 1000, lv_anim_path_bounce);
}

void ScooterPwdCfg::onViewLoad()
{
    View.Create(root);

    AttachEvent(root);
    AttachEvent(View.ui.curpwd_textarea);
    AttachEvent(View.ui.newpwd_textarea);
    AttachEvent(View.ui.cfmpwd_textarea);
    AttachEvent(View.ui.setpwd_button);
}

void ScooterPwdCfg::onViewDidLoad()
{
}

void ScooterPwdCfg::onViewWillAppear()
{
    Model.Init();
    Param_t param;
    param.color = lv_color_white();
    param.time = 1000;

    PAGE_STASH_POP(param);

    lv_obj_set_style_bg_color(root, param.color, LV_PART_MAIN);
    timer = lv_timer_create(onTimerUpdate, param.time, this);

    lv_textarea_set_text(View.ui.curpwd_textarea, "");

    //init the textarea
    if (this->priv.Stash.size == 0) {
        LV_LOG_USER("pwd length is 0\n");
        return;
    }
    LV_LOG_USER("cur pwd is:%s len:%d\n", this->priv.Stash.ptr, \
        this->priv.Stash.size);
    lv_textarea_add_text(View.ui.curpwd_textarea, (char*)this->priv.Stash.ptr);
}

void ScooterPwdCfg::onViewDidAppear()
{

}

void ScooterPwdCfg::onViewWillDisappear()
{

}

void ScooterPwdCfg::onViewDidDisappear()
{
    lv_timer_del(timer);
    Model.Deinit();
}

void ScooterPwdCfg::onViewDidUnload()
{

}

void ScooterPwdCfg::AttachEvent(lv_obj_t* obj)
{
    lv_obj_set_user_data(obj, this);
    lv_obj_add_event_cb(obj, onEvent, LV_EVENT_ALL, this);
}

void ScooterPwdCfg::Update()
{

}

void ScooterPwdCfg::onTimerUpdate(lv_timer_t* timer)
{
    ScooterPwdCfg* instance = (ScooterPwdCfg*)timer->user_data;

    instance->Update();
}

void ScooterPwdCfg::onEvent(lv_event_t* event)
{
    ScooterPwdCfg* instance = (ScooterPwdCfg*)lv_event_get_user_data(event);
    LV_ASSERT_NULL(instance);

    lv_obj_t* obj = lv_event_get_target(event);
    lv_event_code_t code = lv_event_get_code(event);

    if (code == LV_EVENT_SHORT_CLICKED) {
        if (obj == instance->View.ui.curpwd_textarea) {
            LV_LOG_USER("pwd config pressed\n");
            const char* ptr = lv_textarea_get_text(instance->View.ui.curpwd_textarea);
            PageBase::Stash_t data_to_pwdinput;
            data_to_pwdinput.ptr = (void *)ptr;
            data_to_pwdinput.size = 16;
            instance->Manager->Push("Pages/ScooterPwdInput", &data_to_pwdinput);
        }
    }

}