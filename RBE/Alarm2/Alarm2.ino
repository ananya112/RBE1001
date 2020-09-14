#include <ESP32Servo.h>
#include <analogWrite.h>

//define the states in easy-to-read terms
enum {ALARM_OFF, ALARM_ARMED, ALARM_INTRUDER};
int currentState = ALARM_OFF; //start off with the alarm deactivated


//Some pin definitions:
const int buttonArmingPin = 32;
const int buttonDisarmingPin = 33;
const int photoPin = 27;
const int piezoPin  = 26;
const int ledPin    = 14;
Servo myservo;  // create servo object to control a servo
const int servoPin = 25;


void setup(void)
{
  myservo.attach(servoPin);  // attaches the servo pin
  Serial.begin(115200);  // sets the servo motor
  Serial.println("Motor Set Up ");

  pinMode(buttonArmingPin, INPUT_PULLUP); // 32 //if we use INPUT_PULLUP, we don't have to have an external pullup resistor
  pinMode(buttonDisarmingPin, INPUT_PULLUP); //33 //if we use INPUT_PULLUP, we don't have to have an external pullup resistor
  pinMode(photoPin, INPUT);
  pinMode(piezoPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(servoPin, OUTPUT);
  myservo.write(0);
  delay(500);
  Serial.println("setup() complete");

}

 

void loop(void)

/*

* Our loop() is just a set of checker-handler pairs.

*/

{
  if(CheckArmingButton()) HandleArmingButton();
  if(CheckIfLaserBroken()) HandleLaserBroken();
  if(CheckDisarmingButton()) HandleDisarmingButton();

}

 
void HandleArmingButton(void)
{
  if(currentState == ALARM_OFF)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println("Arming!");
    //take action: light the LED
    //take action: you get to ADD CODE HERE to move the servo!
    myservo.write(90);
    currentState = ALARM_ARMED; //Don't forget to change the state!
  }
}

 

void HandleLaserBroken(void)
{
  if(currentState == ALARM_ARMED)
  {
  currentState = ALARM_INTRUDER;
  Serial.println("Intruder!");
  tone(piezoPin, 3800);
  }
}

 
void HandleDisarmingButton(void)
{
  if(CheckDisarmingButton)
  {
  noTone(piezoPin);  
  myservo.write(170);
  //turn off LED
  digitalWrite(ledPin, LOW);
  currentState = ALARM_OFF;
  Serial.println("Disarming");
  }
}

/*________________________________________________________________________

* Code for checking the button -- you don't need to edit this one

*/

bool CheckArmingButton(void)
{
  static int prevButtonState = HIGH; //button up => pin reads HIGH
  bool retVal = false;
  int currButtonState = digitalRead(buttonArmingPin);

  if(prevButtonState != currButtonState)
  {
    delay(10); //this is a cheat for debouncing -- the only place delay is allowed!
    if(currButtonState == LOW) retVal = true;  //button is down => pin reads LOW
  }
  prevButtonState = currButtonState;
  return retVal;
}

/*
* Code for checking the laser. YOU WILL NEED TO EDIT THIS ONE
*/

enum {DARK, LIGHT};

bool CheckIfLaserBroken(void)
{
  static int prevLaserSensorState = DARK; //the program starts with the laser off
  bool retVal = false;
  int currentLaserSensorState = analogRead(photoPin);  
  
  if(prevLaserSensorState > 2600 ){
    retVal = true;
  }  
  prevLaserSensorState = currentLaserSensorState;
  return retVal;
}

/*

* You'll have to make your own disarming checker!

*/

bool CheckDisarmingButton(void)
{
  static int prevButtonState = HIGH; //button up => pin reads HIGH
  bool retVal = false;
  int currButtonState = digitalRead(buttonDisarmingPin);

  if(prevButtonState != currButtonState)
  {
    delay(10); //this is a cheat for debouncing -- the only place delay is allowed!
    if(currButtonState == LOW) retVal = true;  //button is down => pin reads LOW
  }
  prevButtonState = currButtonState;
  return retVal;
}


