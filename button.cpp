#include "button.h"

_RESPONSE_H response;

_BUTTON_H::_BUTTON_H()
{
    
}

void _BUTTON_H::init()
{
    pinMode(X_POSITIVE, INPUT);
    pinMode(X_NEGATIVE, INPUT);
    pinMode(Y_POSITIVE, INPUT);
    pinMode(Y_NEGATIVE, INPUT);
    pinMode(Z_POSITIVE, INPUT);
    pinMode(Z_NEGATIVE, INPUT);
    pinMode(SPB_BUTTON, INPUT);
    pinMode(MILLIMETER_P, INPUT);
    pinMode(MILLIMETER_N, INPUT);
    pinMode(START_B, INPUT);
    pinMode(STOP_B, INPUT);
    pinMode(RESET_B, INPUT);

    Serial.println("$$");
    Serial.println("$X");
}

void _BUTTON_H::onPressed()
{
    int x_P_Button = digitalRead(X_POSITIVE);
    int x_N_Button = digitalRead(X_NEGATIVE);
    int y_P_Button = digitalRead(Y_POSITIVE);
    int y_N_Button = digitalRead(Y_NEGATIVE);
    int z_P_Button = digitalRead(Z_POSITIVE);
    int z_N_Button = digitalRead(Z_NEGATIVE);
    int SPB_Button = digitalRead(SPB_BUTTON);
    int m_P_Button = digitalRead(MILLIMETER_P);
    int m_N_Button = digitalRead(MILLIMETER_N);
    int START_Button = digitalRead(START_B);
    int STOP_Button = digitalRead(STOP_B);
    int RESET_Button = digitalRead(RESET_B);

    if (START_Button == 1)
    {
        Serial.println();
    } else if (STOP_Button == 1)
    {

    } else if (RESET_Button == 1)
    {

    } else if ( SPB_Button == 1)
    {

    }else if (m_P_Button == 1)
    {
        if (millimeter>=1)
        {
            millimeter += 1;
        } else {
            millimeter += 0.1;
        }
        Serial.println(millimeter);

        LCD.writeMillimeter(millimeter);

    } else if (m_N_Button == 1)
    {   
        if (millimeter>1.0){
            millimeter -= 1.0;
        } else {
            if (millimeter!=0.0)
            {
                millimeter -= 0.1;
            }
        }
        Serial.println(millimeter);

        LCD.writeMillimeter(millimeter);
    } else if (x_P_Button == 1)
    {
        data = "X"+String(millimeter);
        sendPinsData(data);

    } else if (x_N_Button == 1)
    {
        data = "X-"+String(millimeter);
        sendPinsData(data);
    } else if (y_P_Button == 1)
    {
        data = "Y"+String(millimeter);
        sendPinsData(data);
    } else if (y_N_Button == 1)
    {
        data = "Y-"+String(millimeter);
        sendPinsData(data);
    } else if (z_P_Button == 1)
    {
        data = "Z"+String(millimeter);
        sendPinsData(data);
    } else if (z_N_Button == 1)
    {
        data = "Z-"+String(millimeter);
        sendPinsData(data);
    } else
    {

    }

}

void _BUTTON_H::sendPinsData(String command)
{
    String data = "G0 ";
    data = data + command;

    Serial.println("G91");
    if (response.parseResponseOk() == "ok")
    {
        Serial.println(data);
        if (response.parseResponseOk() == "ok")
        {
            Serial.println("G90");
        }
    }

}


_BUTTON_H BUTTON = _BUTTON_H();
