#include "ScooterSetting.h"

using namespace Page;

ScooterSetting::ScooterSetting()
    : timer(nullptr)
{

}

ScooterSetting::~ScooterSetting()
{

}

void ScooterSetting::onCustomAttrConfig()
{
    SetCustomLoadAnimType(PageManager::LOAD_ANIM_NONE, 1000, lv_anim_path_bounce);
}

void ScooterSetting::onViewLoad()
{
    View.Create(root);
    //lv_label_set_text(View.ui.labelTitle, Name);

    AttachEvent(root);
    AttachEvent(View.ui.cruise_check);
    AttachEvent(View.ui.energy_dd);
    AttachEvent(View.ui.label_cruise);
    AttachEvent(View.ui.label_energy);
    AttachEvent(View.ui.config_pwd);

    Model.TickSave = Model.GetData();
}

void ScooterSetting::onViewDidLoad()
{
}

void ScooterSetting::onViewWillAppear()
{
    Model.Init();
    Param_t param;
    param.color = lv_color_white();
    param.time = 1000;

    PAGE_STASH_POP(param);

    lv_obj_set_style_bg_color(root, param.color, LV_PART_MAIN);
    timer = lv_timer_create(onTimerUpdate, param.time, this);
}

void ScooterSetting::onViewDidAppear()
{
    uint8_t cruise_state;
    uint8_t recovery_state;
	
	  Model.Send_Get_Cruise_Cmd();
    Model.Get_Cruise_State(&cruise_state);
    View.Switch_UI_Update((bool)cruise_state);
	
    Model.Send_Get_Recovery_Cmd();
    Model.Get_Recovery_State(&recovery_state);
    View.Roller_UI_Update(recovery_state);
}

void ScooterSetting::onViewWillDisappear()
{

}

void ScooterSetting::onViewDidDisappear()
{
    lv_timer_del(timer);
    Model.Deinit();
}

void ScooterSetting::onViewDidUnload()
{

}

void ScooterSetting::AttachEvent(lv_obj_t* obj)
{
    lv_obj_set_user_data(obj, this);
    lv_obj_add_event_cb(obj, onEvent, LV_EVENT_ALL, this);
}

void ScooterSetting::Update()
{

}

void ScooterSetting::onTimerUpdate(lv_timer_t* timer)
{
    ScooterSetting* instance = (ScooterSetting*)timer->user_data;

    instance->Update();
}

void ScooterSetting::SetSwitchImgSrc(const char* srcName)
{
    lv_obj_set_style_bg_img_src(View.ui.cruise_check, ResourcePool::GetImage(srcName), 0);
}

void ScooterSetting::SetRollerSelect(uint16_t sel_opt)
{
    lv_roller_set_selected(View.ui.energy_dd, sel_opt, LV_ANIM_ON);
}

void ScooterSetting::onEvent(lv_event_t* event)
{
    ScooterSetting* instance = (ScooterSetting*)lv_event_get_user_data(event);
    LV_ASSERT_NULL(instance);

    lv_obj_t* obj = lv_event_get_target(event);
    lv_event_code_t code = lv_event_get_code(event);

    if (obj == instance->root)
    {
        if (code == LV_EVENT_GESTURE)
        {
            lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
            //printf("scootersetting gesture 0x%x 0x%x\n", dir, lv_scr_act()->flags);
            if (lv_scr_act()->flags & LV_OBJ_FLAG_USER_1) {
            //if (0) {
                if (dir == LV_DIR_RIGHT) {
                    instance->Manager->Push("Pages/ScooterSysinfo");
                }
                else if (dir == LV_DIR_LEFT) {
                    instance->Manager->BackHome();
                    lv_scr_act()->flags &= ~LV_OBJ_FLAG_USER_1;//clear the bit with spicify the direction
                }
            }
            else {
                if (dir == LV_DIR_RIGHT) {
                    instance->Manager->Pop();
                }
                else if (dir == LV_DIR_LEFT) {
                    instance->Manager->BackHome();
                    lv_scr_act()->flags &= ~LV_OBJ_FLAG_USER_1;//clear the bit with spicify the direction
                }
            }
        }
    }

    if (code == LV_EVENT_VALUE_CHANGED) {
        if (obj == instance->View.ui.cruise_check) {
            LV_LOG_USER("Cruise State: %s\n", lv_obj_has_state(obj, LV_STATE_CHECKED) ? "On" : "Off");
            if (lv_obj_has_state(obj, LV_STATE_CHECKED)){
							  instance->Model.Set_Cruise_State(false);
                instance->SetSwitchImgSrc("switch_on");
            }else{
							  instance->Model.Set_Cruise_State(true);
                instance->SetSwitchImgSrc("switch_off");
						}
        }
        if (obj == instance->View.ui.energy_dd) {
            char buf[32];
            lv_roller_get_selected_str(obj, buf, sizeof(buf));
            LV_LOG_USER("Selected mode: %s index: %d\n", buf, lv_roller_get_selected(obj));
					  instance->Model.Set_Recovery_State((uint8_t)lv_roller_get_selected(obj));
        }
    }

    if (code == LV_EVENT_SHORT_CLICKED) {
        if (obj == instance->View.ui.config_pwd) {
            LV_LOG_USER("pwd config pressed\n");
        }
    }
}
