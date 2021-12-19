#ifndef __SCOOTERSETTING_PRESENTER_H
#define __SCOOTERSETTING_PRESENTER_H

#include "ScooterSettingView.h"
#include "ScooterSettingModel.h"

namespace Page
{

class ScooterSetting : public PageBase
{
public:
    typedef struct
    {
        uint16_t time;
        lv_color_t color;
    } Param_t;

public:
    ScooterSetting();
    virtual ~ScooterSetting();

    virtual void onCustomAttrConfig();
    virtual void onViewLoad();
    virtual void onViewDidLoad();
    virtual void onViewWillAppear();
    virtual void onViewDidAppear();
    virtual void onViewWillDisappear();
    virtual void onViewDidDisappear();
    virtual void onViewDidUnload();

private:
    void Update();
    void AttachEvent(lv_obj_t* obj);
    static void onTimerUpdate(lv_timer_t* timer);
    static void onEvent(lv_event_t* event);

private:
    ScooterSettingView View;
    ScooterSettingModel Model;
    lv_timer_t* timer;
};

}

#endif
