#include <Arduino.h>

void setup()
{
    Serial.begin(19200);
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, LOW);
}

void loop()
{
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.print("Hello");
    digitalWrite(LED_BUILTIN, LOW);
    delay(2000);
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.print("world");
    digitalWrite(LED_BUILTIN, LOW);
    delay(2000);
}