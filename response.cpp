#include "response.h"

MatchState ms;

_RESPONSE_H::_RESPONSE_H()
{

}

void _RESPONSE_H::getResponse(){
    Serial.readBytes(serialRead, 6);
    ms.Target(serialRead);
}

String _RESPONSE_H::parseResponseOk(){
    getResponse();
    char result = ms.Match("ok");
    if (result == "ok")
    {
        Serial.println(result);
        LCD.writeResponse(result);
        return "ok";
    }
}