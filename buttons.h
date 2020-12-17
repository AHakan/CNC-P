#ifndef _BUTTONS_H_
#define _BUTTONS_H_

#include <Arduino.h>

// Buttons define
#define X_POSITIVE 2
#define X_NEGATIVE 3
#define Y_POSITIVE 4
#define Y_NEGATIVE 5
#define Z_POSITIVE 6
#define Z_NEGATIVE 7
#define SPB_BUTTON 8
#define MILLIMETRE_P 9
#define MILLIMETRE_N 10
#define START_B 11
#define STOP_B 12
#define RESET_B 13

class _BUTTONS_H
{
    public:
        _BUTTONS_H();
        void openPins();
        void onPressed();
        void sendData(String command);

        uint8_t millimetre = 0;
    private:

};

extern _BUTTONS_H BUTTONS;
#endif