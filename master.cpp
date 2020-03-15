#include <Arduino.h>

void setup()
{
    Serial.begin(19200);
}

void loop()
{
    Serial.print("Hello");
    delay(2000);
    Serial.print("world");
    delay(2000);
}