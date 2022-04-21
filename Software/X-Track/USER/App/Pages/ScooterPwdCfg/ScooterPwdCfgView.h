#ifndef __SCOOTERPWDCFG_VIEW_H
#define __SCOOTERPWDCFG_VIEW_H

#include "../Page.h"

namespace Page
{
	typedef enum {
		TA_CURPWD = 0,
		TA_NEWPWD,
		TA_CFMPWD,
		TA_PWDNULL
	}PWD_TA_PRESSED;
	class ScooterPwdCfgView
	{
	public:
		void Create(lv_obj_t* root);

	public:
		struct
		{
			lv_obj_t* cont;
			lv_obj_t* curpwd_textarea;//current password
			lv_obj_t* newpwd_textarea;//new password
			lv_obj_t* cfmpwd_textarea;//confirm password

			lv_obj_t* setpwd_button;
			lv_obj_t* cancel_button;

			PWD_TA_PRESSED pwd_ta_pressed = TA_PWDNULL;
		} ui;

	private:
		lv_obj_t* pwd_textarea_Create(lv_obj_t* root, int8_t x_oft, int8_t y_oft,\
		const char* textarea_name);
		lv_obj_t* btn_Create(lv_obj_t* root, const char* btn_name, int8_t x_oft, \
		int8_t y_oft);
	};
}

#endif