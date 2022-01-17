#ifndef __SCOOTERPWD_PRESENTER_H
#define __SCOOTERPWD_PRESENTER_H

#include "ScooterPwdView.h"
#include "ScooterPwdModel.h"

namespace Page
{

class ScooterPwd : public PageBase
{
public:
    typedef struct
    {
        uint16_t time;
        lv_color_t color;
    } Param_t;

public:
    ScooterPwd();
    virtual ~ScooterPwd();

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
    ScooterPwdView View;
    ScooterPwdModel Model;
    lv_timer_t* timer;
};

}

#endif
