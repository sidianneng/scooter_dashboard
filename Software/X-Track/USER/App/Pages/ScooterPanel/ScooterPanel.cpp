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
    SetCustomLoadAnimType(PageManager::LOAD_ANIM_NONE, 1000, lv_anim_path_bounce);
}

void ScooterPanel::onViewLoad()
{
    View.Create(root);
    //lv_label_set_text(View.ui.labelTitle, Name);

    AttachEvent(root);
    AttachEvent(View.ui.panelInfo.cont);
    AttachEvent(View.ui.panelInfo.labelBat1);
    AttachEvent(View.ui.panelInfo.labelBat2);
    AttachEvent(View.ui.panelInfo.labelBat3);
    AttachEvent(View.ui.panelInfo.labelBat4);
    AttachEvent(View.ui.panelInfo.labelBat5);

    AttachEvent(View.ui.panelInfo.labelBluetooth);
    AttachEvent(View.ui.panelInfo.labelCharging);
    AttachEvent(View.ui.panelInfo.labelSpdUint);
    AttachEvent(View.ui.panelInfo.labelSptMode);
    AttachEvent(View.ui.panelInfo.labelTemperature);
    AttachEvent(View.ui.panelInfo.labelWrench);

    Model.TickSave = Model.GetData();
}

void ScooterPanel::onViewDidLoad()
{

}

void ScooterPanel::onViewWillAppear()
{
    Model.Init();
    Param_t param;
    param.color = lv_color_white();
    param.time = 500;

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
    Model.Deinit();
}

void ScooterPanel::onViewDidUnload()
{

}

void ScooterPanel::AttachEvent(lv_obj_t* obj)
{
    //lv_obj_set_user_data(obj, this);
    lv_obj_add_event_cb(obj, onEvent, LV_EVENT_ALL, this);
}

void ScooterPanel::Update()
{
	uint8_t speed, battery;
	uint32_t icons;
	Model.GetScooterInfo(&speed, &battery, &icons);
	lv_label_set_text_fmt(View.ui.panelInfo.labelSpeed, "%d", speed);
  View.Update_Bat_Icon(battery);
	View.Update_Other_Icons(icons);
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

    if (code == LV_EVENT_SHORT_CLICKED)
    {
        //printf("scooterpanel clicked\n");
    }

    if (code == LV_EVENT_GESTURE)
    {
        lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_get_act());
        //printf("scooterlock gesture 0x%x 0x%x\n", dir, lv_scr_act()->flags);
        if (dir == LV_DIR_LEFT) {
            instance->Manager->Push("Pages/ScooterLock");
        }
        else if (dir == LV_DIR_RIGHT) {
            lv_scr_act()->flags |= LV_OBJ_FLAG_USER_1;
            instance->Manager->Push("Pages/ScooterSetting");
        }
    }
}
