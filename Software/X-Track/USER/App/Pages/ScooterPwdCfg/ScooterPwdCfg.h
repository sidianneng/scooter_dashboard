#ifndef __SCOOTERPWDCFG_H
#define __SCOOTERPWDCFG_H

#include "ScooterPwdCfgModel.h"
#include "ScooterPwdCfgView.h"

namespace Page
{
	class ScooterPwdCfg : public PageBase
	{
    public:
        typedef struct
        {
            uint16_t time;
            lv_color_t color;
        } Param_t;

	public:
		ScooterPwdCfg();
		virtual ~ScooterPwdCfg();
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
        void SetDefaultPwd(uint8_t* pwd_buf, uint8_t* pwd_len);

    private:
        ScooterPwdCfgView View;
        ScooterPwdCfgModel Model;
        lv_timer_t* timer;
		uint8_t cur_pwd[PWD_MAX_LEN]={0};
		uint8_t pwd_len = 0;
	};
}

#endif
