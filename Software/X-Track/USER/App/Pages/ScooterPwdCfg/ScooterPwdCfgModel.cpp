#include "ScooterPwdCfgModel.h"

using namespace Page;

void ScooterPwdCfgModel::Init()
{
}

void ScooterPwdCfgModel::Deinit()
{
    if (account)
    {
        delete account;
        account = nullptr;
    }
}