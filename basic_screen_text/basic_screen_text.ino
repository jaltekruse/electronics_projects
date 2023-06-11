#include <LiquidCrystal.h>

const int rs = 2, 
          en = 3, 
          d4 = 6, 
          d5 = 7, 
          d6 = 8, 
          d7 = 9;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
}

String Mario="Mario's Ideas                   ";

void loop() {
  lcd.clear() ; //d
  delay(3000);//d
   
   for(int i=0;i<Mario.length();i++){
    lcd.print(Mario.charAt(i));
    delay(200);
  } 
  lcd.setCursor(16, 1);
  lcd.autoscroll();
  for(int i=0;i<Mario.length();i++){
    lcd.print(Mario.charAt(i));
    delay(400);  
  }
  lcd.noAutoscroll(); 
  lcd.clear();
} 