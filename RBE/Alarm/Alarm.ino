//declare a pin to use for the ADC
const int adcPin = 27;
const int ledPin = 14;

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
  
  delay(500);

  Serial.print(adcValue); //prints ADC Value 
  Serial.print('\t'); //TAB character

}

