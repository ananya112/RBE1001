#include <analogWrite.h>

const int potPin = 12;
const int ledPin = 14;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() 
{
  int adcValue = analogRead(potPin);
  analogWrite(ledPin, adcValue / 4);

  delay(100);
}
