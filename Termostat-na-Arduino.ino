#include <LiquidCrystal.h> 
#include "DHT.h" //by Adafruit 1.4.6

#define DHT11_PIN 8
#define DHTTYPE DHT11
DHT dht(DHT11_PIN, DHTTYPE);
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
float ustawionaTemperatura = 0.0;
void dhtInit()
{
  dht.begin();
} 

void lcdInit()
{
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  //lcd.print("Pierwsza linia"); 
}

float getHumidity()
{
  return dht.readHumidity();
}

float getTemperature()
{
  return dht.readTemperature();
}

void printTemperatureAndHumidity()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("T: ");
  lcd.print(getTemperature());
  lcd.print(",  ");
  lcd.print("H: ");
  lcd.println(getHumidity());
  lcd.print("ustawiona temperatura: ");
  lcd.print(ustawionaTemperatura);

}

void setup() {
  lcdInit();
  dhtInit();
}
 

 
void loop()
{

  delay(250); //Opóźnienie
}
