const int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

  countDown(5);

  
}

void loop() {

  static int delayPeriod = 100;
  static int countDir = 1;
  digitalWrite(ledPin, HIGH); 
  delay(delayPeriod);
  digitalWrite(ledPin, LOW);

  countDir = checkDirChange(delayPeriod, countDir);
  delayPeriod += 100 * countDir;
  Serial.println("New Wait Time: ");
  Serial.println(delayPeriod);
}

int checkDirChange(int delayPeriod, int countDir)
{  
  if((delayPeriod == 1000) || (delayPeriod == 0))
    {
      countDir *= -1; 

      if(countDir < 0)
      {
        Serial.println("going down");
      }
      else{
        Serial.println("going up");
      }
    }
    return countDir;
}

void countDown(int max)
{
  for(int i = max; i>0; i--)
    {
       Serial.println(i);
       Serial.println(", ");
    }
    Serial.println("Go...\n");
}
















