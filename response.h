#ifndef _RESPONSE_H_
#define _RESPONSE_H_

#include <Arduino.h>
#include <Regexp.h>
#include "lcd.h"

class _RESPONSE_H
{
    public:
        _RESPONSE_H();
        void getResponse();
        String parseResponseOk();

        char serialRead[6];
    private: 

};

#endif