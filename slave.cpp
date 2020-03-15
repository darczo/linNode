#include <Arduino.h>
#include <SoftwareSerial.h>

SoftwareSerial softSerial(2, 3); // RX, TX

void setup()
{
    Serial.begin(19200);    
    softSerial.begin(19200); 
}

void loop()
{
    if (Serial.available())
    {
        softSerial.println((char)Serial.read());
    }
}