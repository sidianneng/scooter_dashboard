#ifndef __SCOOTERPANEL_VIEW_H
#define __SCOOTERPANEL_VIEW_H

#include "../Page.h"

namespace Page
{

class ScooterPanelView
{
public:
    void Create(lv_obj_t* root);

public:
    struct
    {
        lv_obj_t* labelTitle;
        lv_obj_t* labelTick;
    } ui;

private:

};

}

#endif // !__VIEW_H
