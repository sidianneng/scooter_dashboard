#include "SystemInfos.h"
#include "../App/Version.h"

SystemInfos::SystemInfos()
{
}

SystemInfos::~SystemInfos()
{

}

void SystemInfos::onCustomAttrConfig()
{
    SetCustomCacheEnable(true);
}

void SystemInfos::onViewLoad()
{
    Model.Init();
    View.Create(root);
    AttachEvent(root);
    AttachEvent(View.ui.sport.icon);
    AttachEvent(View.ui.gps.icon);
    AttachEvent(View.ui.imu.icon);
    AttachEvent(View.ui.mag.icon);
    AttachEvent(View.ui.rtc.icon);
    AttachEvent(View.ui.battery.icon);
    AttachEvent(View.ui.storage.icon);
    AttachEvent(View.ui.system.icon);
}

void SystemInfos::onViewDidLoad()
{

}

void SystemInfos::onViewWillAppear()
{
    lv_indev_set_group(lv_get_indev(LV_INDEV_TYPE_ENCODER), View.ui.group);
    StatusBar::SetStyle(StatusBar::STYLE_BLACK);

    timer = lv_timer_create(onTimerUpdate, 1000, this);
    lv_timer_ready(timer);

    View.SetScrollToY(root, -LV_VER_RES, LV_ANIM_OFF);
    lv_obj_fade_in(root, 300, 0);
}

void SystemInfos::onViewDidAppear()
{
    View.onFocus(View.ui.group);
}

void SystemInfos::onViewWillDisappear()
{
    lv_obj_fade_out(root, 300, 0);
}

void SystemInfos::onViewDidDisappear()
{
    lv_timer_del(timer);
}

void SystemInfos::onViewDidUnload()
{
    View.Delete();
    Model.Deinit();
}

void SystemInfos::AttachEvent(lv_obj_t* obj)
{
    lv_obj_set_user_data(obj, this);
    lv_obj_add_event_cb(obj, onEvent, LV_EVENT_ALL, this);
}

void SystemInfos::Update()
{
    char buf[64];

    /* Sport */
    float trip;
    float maxSpd;
    Model.GetSportInfo(&trip, buf, sizeof(buf), &maxSpd);
    View.SetSport(trip, buf, maxSpd);

    /* GPS */
    float lat;
    float lng;
    float alt;
    float course;
    float speed;
    Model.GetGPSInfo(&lat, &lng, &alt, buf, sizeof(buf), &course, &speed);
    View.SetGPS(lat, lng, alt, buf, course, speed);

    /* MAG */
    float dir;
    int x;
    int y;
    int z;
    Model.GetMAGInfo(&dir, &x, &y, &z);
    View.SetMAG(dir, x, y, z);

    /* IMU */
    int steps;
    Model.GetIMUInfo(&steps, buf, sizeof(buf));
    View.SetIMU(steps, buf);

    /* RTC */
    Model.GetRTCInfo(buf, sizeof(buf));
    View.SetRTC(buf);

    /* Power */
    int usage;
    float voltage;
    Model.GetBatteryInfo(&usage, &voltage, buf, sizeof(buf));
    View.SetBattery(usage, voltage, buf);

    /* Storage */
    View.SetStorage(
        "-",
        VERSION_SDFAT
    );

    /* System */
    DataProc::ConvTime(lv_tick_get(), buf, sizeof(buf));
    View.SetSystem(
        VERSION_SOFTWARE,
        VERSION_LVGL,
        VERSION_COMPILE_TIME,
        buf
    );
}

void SystemInfos::onTimerUpdate(lv_timer_t* timer)
{
    SystemInfos* instance = (SystemInfos*)timer->user_data;

    instance->Update();
}

void SystemInfos::onEvent(lv_event_t* event)
{
    lv_obj_t* obj = lv_event_get_target(event);
    lv_event_code_t code = lv_event_get_code(event);
    SystemInfos* instance = (SystemInfos*)lv_obj_get_user_data(obj);

    if (code == LV_EVENT_SHORT_CLICKED)
    {
        instance->Manager->Pop();
    }

    if (obj == instance->root)
    {
        if (code == LV_EVENT_LEAVE)
        {
            instance->Manager->Pop();
        }
    }
}