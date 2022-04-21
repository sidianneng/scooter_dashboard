#include "ScooterPwdInput.h"
#include <stdarg.h>
#include <stdio.h>

using namespace Page;

ScooterPwdInput::ScooterPwdInput()
    : timer(nullptr)
{
}

ScooterPwdInput::~ScooterPwdInput()
{

}

void ScooterPwdInput::onCustomAttrConfig()
{
    SetCustomLoadAnimType(PageManager::LOAD_ANIM_OVER_BOTTOM, 1000, lv_anim_path_bounce);
}

void ScooterPwdInput::onViewLoad()
{
    View.Create(root);

    AttachEvent(root);
    AttachEvent(View.ui.textarea);
    AttachEvent(View.ui.keyboard);
}

void ScooterPwdInput::onViewDidLoad()
{

}

void ScooterPwdInput::onViewWillAppear()
{
    Model.Init();
    Param_t param;
    param.color = lv_color_white();
    param.time = 1000;

    PAGE_STASH_POP(param);

    lv_obj_set_style_bg_color(root, param.color, LV_PART_MAIN);
    timer = lv_timer_create(onTimerUpdate, param.time, this);

    //init the textarea
    if (this->priv.Stash.size == 0) {
        LV_LOG_USER("pwd length is 0\n");
        return;
    }
    LV_LOG_USER("input pwd is:%s len:%d\n", this->priv.Stash.ptr, \
        this->priv.Stash.size);
    lv_textarea_add_text(View.ui.textarea, (char*)this->priv.Stash.ptr);
}

void ScooterPwdInput::onViewDidAppear()
{

}

void ScooterPwdInput::onViewWillDisappear()
{

}

void ScooterPwdInput::onViewDidDisappear()
{
    lv_timer_del(timer);
    Model.Deinit();
}

void ScooterPwdInput::onViewDidUnload()
{

}

void ScooterPwdInput::AttachEvent(lv_obj_t* obj)
{
    if (obj == View.ui.textarea)
        lv_obj_add_event_cb(View.ui.textarea, onEvent, LV_EVENT_READY, this);
    else if (obj == View.ui.keyboard)
        lv_obj_add_event_cb(View.ui.keyboard, onEvent, LV_EVENT_VALUE_CHANGED, View.ui.textarea);
}

void ScooterPwdInput::Update()
{
    //lv_label_set_text_fmt(View.ui.labelTick, "tick = %d save = %d", Model.GetData(), Model.TickSave);
}

void ScooterPwdInput::onTimerUpdate(lv_timer_t* timer)
{
    ScooterPwdInput* instance = (ScooterPwdInput*)timer->user_data;

    instance->Update();
}

void ScooterPwdInput::onEvent(lv_event_t* event)
{
    ScooterPwdInput* instance = (ScooterPwdInput*)lv_event_get_user_data(event);
    LV_ASSERT_NULL(instance);

    lv_obj_t* obj = lv_event_get_target(event);
    lv_event_code_t code = lv_event_get_code(event);

    // back to the unlock panel
    if (code == LV_EVENT_READY) {
        LV_LOG_USER("pwd OK~");
        const char* ptr = lv_textarea_get_text(instance->View.ui.textarea);
        LV_LOG_USER("pwd input data:%s, len:%d\n", ptr, strlen(ptr));
        PageBase::Stash_t data_to_pwdcfg;
        data_to_pwdcfg.ptr = (void *)ptr;
        data_to_pwdcfg.size = 16;
        instance->Manager->Pop(&data_to_pwdcfg);
    }

    if (code == LV_EVENT_VALUE_CHANGED) {
        void* ta = lv_event_get_user_data(event);
        const char* txt = lv_btnmatrix_get_btn_text(obj, lv_btnmatrix_get_selected_btn(obj));
        const char* null_txt = "";

        if (strcmp(txt, LV_SYMBOL_BACKSPACE) == 0)
            lv_textarea_del_char((lv_obj_t*)ta);
        else if (strcmp(txt, LV_SYMBOL_NEW_LINE) == 0) {
            LV_LOG_USER("Enter was pressed. The current text is: %s", lv_textarea_get_text((lv_obj_t*)ta));
            lv_event_send((lv_obj_t*)ta, LV_EVENT_READY, NULL);
        }
        else
            lv_textarea_add_text((lv_obj_t*)ta, txt);
    }

}
