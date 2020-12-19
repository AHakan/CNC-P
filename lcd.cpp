#include "lcd.h"

LiquidCrystal_I2C lcd(0x27,20,4);

_LCD_H::_LCD_H()
{

}

void _LCD_H::init()
{
    lcd.init();
    lcd.backlight();
    lcd.setCursor(0,0);
    lcd.print("Welcome!, CNC-P.");
}

void _LCD_H::writeResponse(char res[])
{
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(res);
}

void _LCD_H::writeMillimeter(float data)
{
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Millimeter:");
    lcd.print(data);
}
_LCD_H LCD = _LCD_H();