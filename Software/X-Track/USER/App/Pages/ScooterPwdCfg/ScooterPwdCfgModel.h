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

	private:
		Account* account;
	};
}

#endif