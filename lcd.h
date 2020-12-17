#ifndef _LCD_H_
#define _LCD_H_

#include <Arduino.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

class _LCD_H
{
    public:
        _LCD_H();
        void initLCD();
        void writeResponse(char res[]);

    private:
};

extern _LCD_H LCD;
#endif