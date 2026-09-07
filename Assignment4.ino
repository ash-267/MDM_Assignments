// Using LCD with I2C protocol with 4 connection made with Arduino Uno to print Hello World on the LCD

#include <Wire.h>                 		// I2C communication library 
#include <LiquidCrystal_I2C.h>    	// I2C LCD library 

LiquidCrystal_I2C lcd(0x27, 16, 2); 

void setup() { 
  lcd.init();  
  lcd.backlight(); 
  lcd.setCursor(0, 0);             
  lcd.print("Hello World");} 

void loop() {
  // Nothing required here 
}
