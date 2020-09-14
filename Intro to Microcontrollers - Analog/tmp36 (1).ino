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
  
  float voltage = 0;      //to be edited by the student!
  float temperature = 0;  //to be edited by the student!

  Serial.print(adcValue);

  //add lines to print voltage and temperature here; format them nicely on one line!
  //note that you can add a TAB character with Serial.print('\t');
  
  Serial.println();
}
