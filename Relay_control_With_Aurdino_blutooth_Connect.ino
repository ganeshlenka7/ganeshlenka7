int Relay=2;
void setup()
{
  pinMode(Relay,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  while(Serial.available()>0)
  {
    char D = Serial.read();
    if(D=='1')
    {
      digitalWrite(Relay,LOW);
      Serial.println("ON");
    }
    else if(D=='0')
    {
      digitalWrite(Relay,HIGH);
      Serial.println("OFF");
    }
  }
  delay(1000);
}