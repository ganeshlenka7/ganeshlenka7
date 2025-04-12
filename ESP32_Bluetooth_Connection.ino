#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

int relay=2;
char Data;
void setup()
{
  pinMode(relay,OUTPUT);
  Serial.begin(115200);
  SerialBT.begin("ESP32");
  Serial.println("Device connected");
}
void loop()
{
  while(SerialBT.available()>0)
  {
  Data = SerialBT.read();
  if(Data=='1')
  {
   digitalWrite(relay,LOW); //switch ON LIGHT
   Serial.println("ON");
  }
  else if(Data== '0')
  {
    digitalWrite(relay,HIGH); //switch OFF LIGHT
    Serial.println("OFF");
  }
  }
}