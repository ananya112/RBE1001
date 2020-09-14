#include <analogWrite.h>

const int tmp36pin = 27;

void setup() 
{
  Serial.begin(115200);

  pinMode(tmp36pin, INPUT);
}

void loop() 
{
  int adcValue = analogRead(tmp36pin);
  
  float voltage = (3.3 * adcValue) / 4096.0;      
  float temperature = (voltage -.35) / .01;  

  Serial.print(adcValue);

  Serial.print('\t');

  Serial.print(voltage);

  Serial.print('\t');

  Serial.print(temperature);

  Serial.print('\t');
  
  Serial.println();

  delay(250);
}

