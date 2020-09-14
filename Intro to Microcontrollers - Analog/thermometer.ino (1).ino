#include <ESP32Servo.h>
#include <analogWrite.h>

const int tmp36pin = 27;
Servo myservo;  // create servo object to control a servo
const int servoPin = 14;

void setup() 
{
  myservo.attach(servoPin);  // attaches the servo pin
  Serial.begin(115200);  // sets the servo motor 
  pinMode(tmp36pin, INPUT); //takes temp from temperature sensor 
}

void loop() 
{
  int adcValue = analogRead(tmp36pin); //reads value for temperature from temperature sensor 
  float voltage = (3.3 * adcValue) / 4096.0;      // formula for voltage 
  float temperature = (voltage -.35) / .01;   //formula for temperature in Celcius

  int angle = map(temperature, 20, 30, 0, 180);  // scale it to use it with the servo (value between 0 and 180)
  myservo.write(angle);                          // sets the servo position according to the scaled value
  delay(200);                                    // waits for the servo to get there

  Serial.print(adcValue);   //prints the ADC value 
  Serial.print('\t'); // tab
  Serial.print(angle);//prints the angle
  Serial.print('\t'); // tab 
  Serial.print(temperature); //prints the ADC temperature 
  Serial.print('\t'); // tab 
  delay(250); //delays the sensor reading by 250 ms

}

