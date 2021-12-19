#ifndef __SCOOTERSYSINFO_PRESENTER_H
#define __SCOOTERSYSINFO_PRESENTER_H

#include "ScooterSysinfoView.h"
#include "ScooterSysinfoModel.h"

namespace Page
{

class ScooterSysinfo : public PageBase
{
public:
    typedef struct
    {
        uint16_t time;
        lv_color_t color;
    } Param_t;

public:
    ScooterSysinfo();
    virtual ~ScooterSysinfo();

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
    ScooterSysinfoView View;
    ScooterSysinfoModel Model;
    lv_timer_t* timer;
};

}

#endif
