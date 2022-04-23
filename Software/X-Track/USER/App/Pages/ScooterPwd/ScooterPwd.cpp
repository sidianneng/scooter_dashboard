#include "ScooterPwd.h"
#include <stdarg.h>
#include <stdio.h>

using namespace Page;

ScooterPwd::ScooterPwd()
    : timer(nullptr)
{
}

ScooterPwd::~ScooterPwd()
{

}

void ScooterPwd::onCustomAttrConfig()
{
    SetCustomLoadAnimType(PageManager::LOAD_ANIM_OVER_BOTTOM, 1000, lv_anim_path_bounce);
}

void ScooterPwd::onViewLoad()
{
    View.Create(root);

    AttachEvent(root);
    AttachEvent(View.ui.textarea);
    AttachEvent(View.ui.keyboard);
}

void ScooterPwd::onViewDidLoad()
{

}

void ScooterPwd::onViewWillAppear()
{
    Model.Init();
    Param_t param;
    param.color = lv_color_white();
    param.time = 1000;

    PAGE_STASH_POP(param);

    lv_obj_set_style_bg_color(root, param.color, LV_PART_MAIN);
    timer = lv_timer_create(onTimerUpdate, param.time, this);
	
    //get the pwd data from eeprom
    Model.GetPwdFromEeprom(this->cur_pwd, &this->pwd_len);
    if (this->pwd_len == 0)
        SetDefaultPwd(this->cur_pwd, &(this->pwd_len));
    LV_LOG_USER("app eeprom pwd:%s len:%d\n", this->cur_pwd, this->pwd_len);
}

void ScooterPwd::onViewDidAppear()
{

}

void ScooterPwd::onViewWillDisappear()
{

}

void ScooterPwd::onViewDidDisappear()
{
    lv_timer_del(timer);
    Model.Deinit();
}

void ScooterPwd::onViewDidUnload()
{

}

void ScooterPwd::AttachEvent(lv_obj_t* obj)
{
    if(obj == View.ui.textarea)
        lv_obj_add_event_cb(View.ui.textarea, onEvent, LV_EVENT_READY, this);
    else if(obj == View.ui.keyboard)
        lv_obj_add_event_cb(View.ui.keyboard, onEvent, LV_EVENT_VALUE_CHANGED, this);
}

void ScooterPwd::Update()
{
    //lv_label_set_text_fmt(View.ui.labelTick, "tick = %d save = %d", Model.GetData(), Model.TickSave);
}

void ScooterPwd::onTimerUpdate(lv_timer_t* timer)
{
    ScooterPwd* instance = (ScooterPwd*)timer->user_data;

    instance->Update();
}

void ScooterPwd::SetDefaultPwd(uint8_t* pwd_buf, uint8_t* pwd_len)
{
    uint8_t temp_buf[PWD_MAX_LEN] = DEFAULT_PWD;
    uint8_t temp_len = strlen((char *)temp_buf);

    memcpy(pwd_buf, temp_buf, temp_len);
    *pwd_len = temp_len;
}

void ScooterPwd::onEvent(lv_event_t* event)
{
    ScooterPwd* instance = (ScooterPwd*)lv_event_get_user_data(event);
    LV_ASSERT_NULL(instance);

    lv_obj_t* obj = lv_event_get_target(event);
    lv_event_code_t code = lv_event_get_code(event);

    // back to the unlock panel
    if (code == LV_EVENT_READY) {
        LV_LOG_USER("pwd OK~");
        instance->Model.UnlockScooter();
        instance->Manager->Pop();
    }

    if (code == LV_EVENT_VALUE_CHANGED) {
        const char* txt = lv_btnmatrix_get_btn_text(instance->View.ui.keyboard, \
            lv_btnmatrix_get_selected_btn(instance->View.ui.keyboard));
        if (strcmp(txt, LV_SYMBOL_BACKSPACE) == 0)
            lv_textarea_del_char(instance->View.ui.textarea);
        else if (strcmp(txt, LV_SYMBOL_NEW_LINE) == 0) {
            LV_LOG_USER("cur pwd:%s input pwd:%s len:%d\n", \
                instance->cur_pwd,
                lv_textarea_get_text(instance->View.ui.textarea), \
                instance->pwd_len);
            //check the input pwd
            const char* inputpwd = \
                lv_textarea_get_text(instance->View.ui.textarea);
            if (strlen(inputpwd) == instance->pwd_len && strlen(inputpwd) <= PWD_MAX_LEN) {
                if (memcmp((char*)lv_textarea_get_text(instance->View.ui.textarea), \
                    instance->cur_pwd, instance->pwd_len) == 0) {
                    lv_event_send(instance->View.ui.textarea, LV_EVENT_READY, NULL);
                }
            }
        }
        else {
            lv_textarea_add_text(instance->View.ui.textarea, txt);
        }
    }

}
