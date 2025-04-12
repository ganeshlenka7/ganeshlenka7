#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
char a[]={'H','A','P','P','Y','D','I','W','A','L','I'};
void setup()
{
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("WELCOME"); delay(2000);

}
void loop()
{
  lcd.clear();
  for(int i=0;i<5;i++)
  {
   
    lcd.setCursor(i,0);
    lcd.print(a[i]);
    delay(500);
    
  }
  for(int j=5;j<11;j++)
  {
    lcd.setCursor(j,1);
    lcd.print(a[j]);
    delay(500);
  }

 
}