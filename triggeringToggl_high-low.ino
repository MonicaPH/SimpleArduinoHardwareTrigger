int tgrPin = 2;
int tggl = 1;

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
        if (tggl == 1)
        {
          digitalWrite(tgrPin, LOW); 
          tggl = 0;
        }
        else 
        {
          digitalWrite(tgrPin, HIGH); 
          tggl = 1;
        }
      } 
    }
  }
}
