#ifndef __SCOOTERPANEL_PRESENTER_H
#define __SCOOTERPANEL_PRESENTER_H

#include "ScooterPanelView.h"
#include "ScooterPanelModel.h"

namespace Page
{

class ScooterPanel : public PageBase
{
public:
    typedef struct
    {
        uint16_t time;
        lv_color_t color;
    } Param_t;

public:
    Template();
    virtual ~Template();

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
    ScooterPanelView View;
    ScooterPanelModel Model;
    lv_timer_t* timer;
};

}

#endif
