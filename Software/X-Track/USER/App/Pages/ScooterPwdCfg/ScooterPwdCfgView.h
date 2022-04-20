#ifndef __SCOOTERPWDCFG_VIEW_H
#define __SCOOTERPWDCFG_VIEW_H

#include "../Page.h"

namespace Page
{
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
		} ui;

	private:
		lv_obj_t* pwd_textarea_Create(lv_obj_t* root, uint8_t x_oft, uint8_t y_oft,\
		const char* textarea_name);
		lv_obj_t* btn_Create(lv_obj_t* root, const char* btn_name, uint8_t x_oft, \
		uint8_t y_oft);
	};
}

#endif