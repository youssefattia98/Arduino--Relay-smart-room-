#include <LiquidCrystal.h>
LiquidCrystal lcd (2, 3, 4 , 5 , 6 , 7);
char x;
void setup() {
  pinMode(7, OUTPUT);
  Serial.begin(9600);
  digitalWrite(7,HIGH);
}

void loop() {
  Serial.println("o-->ON for 1 sec.");
  Serial.println("on-->stay On");
  Serial.println("f-->OFF");
  while (!Serial.available());
  x =  Serial.read();
  lcd.clear();
  switch(x){
    case'o': // on for 5 sec
    lcd.print("ON 5 sec");
    digitalWrite(7,LOW);
    delay(5000);
    digitalWrite(7,HIGH);
    break;
    case'on':
    lcd.print("ON");
    digitalWrite(7,LOW);
    break;
    case'off':
    lcd.print("OFF");
    digitalWrite(7,HIGH);
    break;
    }
}
