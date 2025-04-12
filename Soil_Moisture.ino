int SMs=A0;
int A=0;
void setup()
{
  pinMode(SMs,INPUT);
  Serial.begin(9600);
}
void loop()
{
  A=analogRead(SMs);
  if(A>=500)
  {
    Serial.print("Soil Moisture value: ");
    Serial.println(A);
    Serial.println("DRY!! need water");
    delay(2000);
  }
  else
  {
    Serial.print("Soil Moisture value: ");
    Serial.println(A);
    Serial.println("WET (^-^) ");
    delay(2000);
  }
}