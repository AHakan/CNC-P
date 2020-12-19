#ifndef _CNCP_H_
#define _CNCP_H_

#include <Arduino.h>
#include "lcd.h"
#include "button.h"

class _CNCP_H
{
    public:
        _CNCP_H();
        void init();
        void loop();
};


extern _CNCP_H CNCP;
#endif