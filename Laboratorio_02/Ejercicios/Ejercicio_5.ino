#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup(){ lcd.begin(16,2); lcd.print("Hola UdeA"); lcd.setCursor(0,1); lcd.print("Practica 2"); }
void loop(){ delay(500); lcd.scrollDisplayLeft(); }