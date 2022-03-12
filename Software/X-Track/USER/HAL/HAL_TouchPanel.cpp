#include "HAL.h"
#include "FT3267/FT3267.h"

typedef FT3267 TOUCH_PANEL_CLASS;

static TOUCH_PANEL_CLASS touch_panel(
    CONFIG_TOUCH_PANEL_RST_PIN,
    CONFIG_TOUCH_PANEL_INT_PIN
);

void HAL::TouchPanel_Init()
{
    Serial.print("Touch Panel: init...");
    touch_panel.begin();
    Serial.println("success");
}

void HAL::TouchPanel_GetPoint(uint16_t* pos_x, uint16_t* pos_y)
{
    touch_panel.TP_Get_Position(pos_x, pos_y);
}

bool HAL::TouchPanel_GetIsPush()
{
		return (touch_panel.Get_Num_of_Point() > 0 ? true : false);
}
