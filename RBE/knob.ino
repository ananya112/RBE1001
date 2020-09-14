#include <ESP32Servo.h>

Servo myservo;  // create servo object to control a servo
const int servoPin = 14;

int potPin = 27;  // analog pin used to read the potentiometer

void setup() 
{
  myservo.attach(servoPin);  // attaches the servo pin
}

void loop() 
{
  int adcValue = analogRead(potPin);          // reads the value of the potentiometer (value between 0 and 1023)
  int angle = map(adcValue, 0, 4096, 0, 180); // scale it to use it with the servo (value between 0 and 180)
  myservo.write(angle);                       // sets the servo position according to the scaled value
  delay(200);                                  // waits for the servo to get there
}
