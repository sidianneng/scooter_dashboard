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
    AttachEvent(View.ui.cancel_button);
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
	
    //get the pwd data from eeprom
    Model.GetPwdFromEeprom(this->cur_pwd, &this->pwd_len);
    if (this->pwd_len == 0)
        SetDefaultPwd(this->cur_pwd, &(this->pwd_len));
    LV_LOG_USER("app eeprom pwd:%s len:%d\n", this->cur_pwd, this->pwd_len);

    //init the textarea
    if (this->priv.Stash.size == 0) {
        LV_LOG_USER("pwd length is 0\n");
        return;
    }
    LV_LOG_USER("cur pwd is:%s len:%d\n", this->priv.Stash.ptr, \
        this->priv.Stash.size);
    if (this->View.ui.pwd_ta_pressed == TA_CURPWD) {
        lv_textarea_set_text(View.ui.curpwd_textarea, "");
        lv_textarea_add_text(View.ui.curpwd_textarea, \
            (char*)this->priv.Stash.ptr);
    }
    else if (this->View.ui.pwd_ta_pressed == TA_NEWPWD) {
        lv_textarea_set_text(View.ui.newpwd_textarea, "");
        lv_textarea_add_text(View.ui.newpwd_textarea, \
            (char*)this->priv.Stash.ptr);
    }
    else if (this->View.ui.pwd_ta_pressed == TA_CFMPWD) {
        lv_textarea_set_text(View.ui.cfmpwd_textarea, "");
        lv_textarea_add_text(View.ui.cfmpwd_textarea, \
            (char*)this->priv.Stash.ptr);
    }
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

void ScooterPwdCfg::SetDefaultPwd(uint8_t* pwd_buf, uint8_t* pwd_len)
{
    uint8_t temp_buf[PWD_MAX_LEN] = DEFAULT_PWD;
    uint8_t temp_len = strlen((char*)temp_buf);

    memcpy(pwd_buf, temp_buf, temp_len);
    *pwd_len = temp_len;
}

void ScooterPwdCfg::onEvent(lv_event_t* event)
{
    ScooterPwdCfg* instance = (ScooterPwdCfg*)lv_event_get_user_data(event);
    LV_ASSERT_NULL(instance);

    lv_obj_t* obj = lv_event_get_target(event);
    lv_event_code_t code = lv_event_get_code(event);

    if (code == LV_EVENT_SHORT_CLICKED) {
        if (obj == instance->View.ui.curpwd_textarea) {
            LV_LOG_USER("pwd curpwd pressed\n");
            instance->View.ui.pwd_ta_pressed = TA_CURPWD;
            const char* ptr = lv_textarea_get_text(instance->View.ui.curpwd_textarea);
            PageBase::Stash_t data_to_pwdinput;
            data_to_pwdinput.ptr = (void *)ptr;
            data_to_pwdinput.size = PWD_MAX_LEN;
            instance->Manager->Push("Pages/ScooterPwdInput", &data_to_pwdinput);
        }
        else if (obj == instance->View.ui.newpwd_textarea) {
            LV_LOG_USER("pwd newpwd pressed\n");
            instance->View.ui.pwd_ta_pressed = TA_NEWPWD;
            const char* ptr = lv_textarea_get_text(instance->View.ui.newpwd_textarea);
            PageBase::Stash_t data_to_pwdinput;
            data_to_pwdinput.ptr = (void*)ptr;
            data_to_pwdinput.size = PWD_MAX_LEN;
            instance->Manager->Push("Pages/ScooterPwdInput", &data_to_pwdinput);
        }
        else if (obj == instance->View.ui.cfmpwd_textarea) {
            LV_LOG_USER("pwd cfmpwd pressed\n");
            instance->View.ui.pwd_ta_pressed = TA_CFMPWD;
            const char* ptr = lv_textarea_get_text(instance->View.ui.cfmpwd_textarea);
            PageBase::Stash_t data_to_pwdinput;
            data_to_pwdinput.ptr = (void*)ptr;
            data_to_pwdinput.size = PWD_MAX_LEN;
            instance->Manager->Push("Pages/ScooterPwdInput", &data_to_pwdinput);
        }
        else if (obj == instance->View.ui.setpwd_button) {
            LV_LOG_USER("pwd cfg YES pressed\n");
            bool curpwd_check = false;
            bool newpwd_check = false;
			const char *curpwd_ptr = \
				lv_textarea_get_text(instance->View.ui.curpwd_textarea);
            LV_LOG_USER("cur pwd:%s, len:%d\n", curpwd_ptr, strlen(curpwd_ptr));
			const char *newpwd_ptr = \
				lv_textarea_get_text(instance->View.ui.newpwd_textarea);
            LV_LOG_USER("new pwd:%s, len:%d\n", newpwd_ptr, strlen(newpwd_ptr));
			const char *cfmpwd_ptr = \
				lv_textarea_get_text(instance->View.ui.cfmpwd_textarea);
            LV_LOG_USER("cfm pwd:%s, len:%d\n", cfmpwd_ptr, strlen(cfmpwd_ptr));
            if (strlen(curpwd_ptr) == instance->pwd_len) {
                if(!memcmp(curpwd_ptr, instance->cur_pwd, \
                    strlen(curpwd_ptr)))
                    curpwd_check = true;
            }
            if (strlen(newpwd_ptr) == strlen(cfmpwd_ptr) && \
                strlen(newpwd_ptr) <= PWD_MAX_LEN) {
                if(strlen(newpwd_ptr))
                    if (!memcmp(newpwd_ptr, cfmpwd_ptr, strlen(newpwd_ptr)))
                        newpwd_check = true;
            }
            if (!curpwd_check) {
                LV_LOG_USER("cur pwd error\n");
                instance->View.label_update("cur pwd error");
            }
            else if (!newpwd_check) {
                LV_LOG_USER("new pwd error\n");
                instance->View.label_update("new pwd error");
            }
			else if(curpwd_check && newpwd_check){
                LV_LOG_USER("new pwd check is OK, write it to eeprom\n");
                LV_LOG_USER("new pwd:%s, len:%d\n", newpwd_ptr, strlen(newpwd_ptr));
                instance->View.label_update("SET PWD OK");
                instance->Model.SetPwdToEeprom((uint8_t *)newpwd_ptr, \
									(uint8_t)strlen(newpwd_ptr));
			}
        }
        else if (obj == instance->View.ui.cancel_button) {
            LV_LOG_USER("pwd cfg pop pressed\n");
            instance->Manager->Pop();
        }
    }

}
