#include "buttons.h"

_BUTTONS_H::_BUTTONS_H()
{
    
}

void _BUTTONS_H::openPins(){
    Serial.begin(115200);

    pinMode(X_POSITIVE, INPUT);
    pinMode(X_NEGATIVE, INPUT);
    pinMode(Y_POSITIVE, INPUT);
    pinMode(Y_NEGATIVE, INPUT);
    pinMode(Z_POSITIVE, INPUT);
    pinMode(Z_NEGATIVE, INPUT);
    pinMode(SPB_BUTTON, INPUT);
    pinMode(MILLIMETRE_P, INPUT);
    pinMode(MILLIMETRE_N, INPUT);
    pinMode(START_B, INPUT);
    pinMode(STOP_B, INPUT);
    pinMode(RESET_B, INPUT);

    Serial.println("$$");
    Serial.println("$X");
}

void _BUTTONS_H::onPressed(){
    int x_P_Button = digitalRead(X_POSITIVE);
    int x_N_Button = digitalRead(X_NEGATIVE);
    int y_P_Button = digitalRead(Y_POSITIVE);
    int y_N_Button = digitalRead(Y_NEGATIVE);
    int z_P_Button = digitalRead(Z_POSITIVE);
    int z_N_Button = digitalRead(Z_NEGATIVE);
    int SPB_Button = digitalRead(SPB_BUTTON);
    int m_P_Button = digitalRead(MILLIMETRE_P);
    int m_N_Button = digitalRead(MILLIMETRE_N);
    int START_Button = digitalRead(START_B);
    int STOP_Button = digitalRead(STOP_B);
    int RESET_Button = digitalRead(RESET_B);


    if (m_P_Button == 1)
    {
        millimetre += 1;
    } else if (m_N_Button == 1)
    {
        if (millimetre != 0){
            millimetre -= 1;
        }
    } else if (START_Button == 1)
    {
        Serial.println();
    } else if (STOP_Button == 1)
    {

    } else if (RESET_Button == 1)
    {

    } else if ( SPB_Button == 1)
    {

    } else if (x_P_Button == 1)
    {
        Serial.println("G0 X2");
    } else if (x_N_Button == 1)
    {
        Serial.println("G0 X-2");
    } else if (y_P_Button == 1)
    {
        Serial.println("G0 Y2");
    } else if (y_N_Button == 1)
    {
        Serial.println("G0 Y-2");
    } else if (z_P_Button == 1)
    {
        Serial.println("G0 Z2");
    } else if (z_N_Button == 1)
    {
        Serial.println("G0 Z-2");
    } else
    {

    }

}

void _BUTTONS_H::sendData(String command){
    String data = "G0 ";
    data = data + command;

    Serial.println("G91");
    Serial.println(data);
    Serial.println("G90");


}

_BUTTONS_H BUTTONS = _BUTTONS_H();
