#ifndef __SCOOTERPWD_VIEW_H
#define __SCOOTERPWD_VIEW_H

#include "../Page.h"

namespace Page
{

class ScooterPwdView
{
public:
    void Create(lv_obj_t* root);

public:
    struct
    {
        lv_obj_t* cont;
        lv_obj_t* textarea;
        lv_obj_t* keyboard;
    } ui;

private:
    lv_obj_t* Pwd_Textarea_Create(lv_obj_t* root);
    lv_obj_t* Pwd_Keyboard_Create(lv_obj_t* root);
};

}

#endif // !__VIEW_H
