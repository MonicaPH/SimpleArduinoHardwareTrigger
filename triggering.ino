int tgrPin = 2;
int delayMS = 100;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(tgrPin, OUTPUT);
  digitalWrite(tgrPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(1)
  {
    if(Serial.available() > 0)
    {
      if(Serial.read() == '1')
      {
        digitalWrite(tgrPin, LOW); 
        delay(delayMS);
        digitalWrite(tgrPin, HIGH);
      } 
    }
  }
}
