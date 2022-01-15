#ifndef __SCOOTERLOCK_VIEW_H
#define __SCOOTERLOCK_VIEW_H

#include "../Page.h"

namespace Page
{

class ScooterLockView
{
public:
    void Create(lv_obj_t* root);

public:
    struct
    {
        lv_obj_t* cont;
        lv_obj_t* LockIcon;
        lv_obj_t* UnLockIcon;
    } ui;

private:
    void BtnCont_Create(lv_obj_t* par);
    lv_obj_t* Btn_Create(lv_obj_t* par, const void* img_src, lv_coord_t x_ofs);
};

}

#endif // !__VIEW_H
