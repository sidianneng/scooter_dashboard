#ifndef __SCOOTERPWDCFG_MODEL_H
#define __SCOOTERPWDCFG_MODEL_H

#include "lvgl/lvgl.h"
#include "Common/DataProc/DataProc.h"

namespace Page
{
	class ScooterPwdCfgModel
	{
	public:
		void Init();
		void Deinit();
    void GetPwdFromEeprom(uint8_t* pwd_buf, uint8_t *pwd_len);
    void SetPwdToEeprom(uint8_t* pwd_buf, uint8_t pwd_len);

	private:
		Account* account;
	};
}

#endif
