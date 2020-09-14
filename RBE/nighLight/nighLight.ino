//declare a pin to use for the ADC
const int adcPin = 26;
const int ledPin = 13;

void setup() 
{
  pinMode(adcPin, INPUT);

  //this sets up the ESP32 to communicate with the Serial Monitor or console on your computer
  //115200 is the buad rate: bits per second
  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);         // initialize the digital pin as an output.
}

void loop() 
{
  //read the ADC
  int adcValue = analogRead(adcPin);

  float voltage = (3.3 * adcValue) / 4096.0;  // formula for voltage 
  
  Serial.print(adcValue); //prints ADC Value 
  Serial.print('\t'); //TAB character

  Serial.print(voltage); // prints the voltage 
  Serial.print('\n'); //newline

  if(voltage <= .47){
    digitalWrite(ledPin, LOW);   // turn the LED off (LOW is the voltage level) 
      Serial.print("DARK "); //prints dark  
  }

  else if(voltage > .47){
    digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level) 
    Serial.print("LIGHT "); //prints light 
  }
  


  delay(250);
}

