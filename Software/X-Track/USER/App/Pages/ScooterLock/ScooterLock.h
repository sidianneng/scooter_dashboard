#ifndef __SCOOTERLOCK_PRESENTER_H
#define __SCOOTERLOCK_PRESENTER_H

#include "ScooterLockView.h"
#include "ScooterLockModel.h"

namespace Page
{

class ScooterLock : public PageBase
{
public:
    typedef struct
    {
        uint16_t time;
        lv_color_t color;
    } Param_t;

public:
    ScooterLock();
    virtual ~ScooterLock();

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
    void SetBtnRecImgSrc(const char* srcName);

private:
    ScooterLockView View;
    ScooterLockModel Model;
    lv_timer_t* timer;
    bool locked;
};

}

#endif
