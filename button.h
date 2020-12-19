#ifndef _BUTTON_H_
#define _BUTTON_H_

#include <Arduino.h>
#include "response.h"
#include "lcd.h"

// Buttons define
#define X_POSITIVE 2
#define X_NEGATIVE 3
#define Y_POSITIVE 4
#define Y_NEGATIVE 5
#define Z_POSITIVE 6
#define Z_NEGATIVE 7
#define SPB_BUTTON 8
#define MILLIMETER_P 9
#define MILLIMETER_N 10
#define START_B 11
#define STOP_B 12
#define RESET_B 13

class _BUTTON_H
{
    public:
        _BUTTON_H();
        void init();
        void onPressed();
        void sendPinsData(String command);

        float millimeter = 0;
        String data;
    private:

};

extern _BUTTON_H BUTTON;
#endif