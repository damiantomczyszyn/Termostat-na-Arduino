#include <LiquidCrystal.h> 

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
 

void lcdInit()
{
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  //lcd.print("Pierwsza linia"); 
}

void setup() {
  lcdInit();
}
 

 
void loop()
{

  delay(250); //Opóźnienie
}