#include "cncp.h"

_CNCP_H::_CNCP_H()
{

}

void _CNCP_H::init()
{
    Serial.begin(115200);
    LCD.init();
    BUTTON.init();
}

void _CNCP_H::loop()
{
    BUTTON.onPressed();
    delay(100);
}

_CNCP_H CNCP = _CNCP_H();