#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int LM35 = 0;
float temperatura = 0;
int ADClido = 0;

void setup()
{
  lcd.begin(16, 2);
  analogReference(INTERNAL); 
}
void loop()
{
  ADClido = analogRead(LM35);
  temperatura = ADClido * 0.1075268817204301;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Temperatura:");
  lcd.setCursor(0,1);
  lcd.print(temperatura); 
  delay(5000);
} 
