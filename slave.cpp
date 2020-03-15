#include <Arduino.h>
#include <SoftwareSerial.h>

SoftwareSerial softSerial(2, 3); // RX, TX

void setup()
{
    Serial.begin(19200);    
    softSerial.begin(19200); 

     pinMode(LED_BUILTIN, OUTPUT);
     digitalWrite(LED_BUILTIN, LOW);
}

void loop()
{
    if (Serial.available())
    {
        digitalWrite(LED_BUILTIN, HIGH);
        softSerial.println((char)Serial.read());
        digitalWrite(LED_BUILTIN, LOW);
    }   
}