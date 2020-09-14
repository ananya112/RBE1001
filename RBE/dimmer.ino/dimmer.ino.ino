#include <analogWrite.h>

/*
 * the program runs the LED progression (one second on, one off, two
on, one off, etc.) in the previous section when you hold the button down and stops and resets
the counter to zero when you release it
 * 
 */


const int buttonPin = 26;     // the number of the pushbutton pin
const int led =  14;      // the number of the LED pin

void setup() 
{
  pinMode(led, OUTPUT);        // initialize the LED pin as an output:
  pinMode(buttonPin, INPUT);      // initialize the pushbutton pin as an input:
}

void loop()
{
  int buttonState = digitalRead(buttonPin); // reads the state of the pushbutton value

  int count = 1000; //counter resents to one second 
  while(buttonState == LOW) // button state is high means it is pressed 
  {     
    // turn LED on:    
       analogWrite(led, 150);   // turn the LED on (HIGH is the voltage level)
       delay(count);               // wait for a second
       analogWrite(led, 75);    // turn the LED off by making the voltage LOW
       delay(1000);               // wait for a second

       count += 1000; // add one second to the counter value (keep the light on for one extra second)
       buttonState = digitalRead(buttonPin);  //re-read the state of the button (whether it is being pressed or not)
  }

  
}


