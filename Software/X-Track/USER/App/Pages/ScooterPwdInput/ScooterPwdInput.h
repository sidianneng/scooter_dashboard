#ifndef __SCOOTERPWDINPUT_H
#define __SCOOTERPWDINPUT_H

#include "ScooterPwdInputView.h"
#include "ScooterPwdInputModel.h"

namespace Page
{

    class ScooterPwdInput : public PageBase
    {
    public:
        typedef struct
        {
            uint16_t time;
            lv_color_t color;
        } Param_t;

    public:
        ScooterPwdInput();
        virtual ~ScooterPwdInput();

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
        ScooterPwdInputView View;
        ScooterPwdInputModel Model;
        lv_timer_t* timer;
    };

}

#endif
