#include <LiquidCrystal.h>
/**
 * @file Store Visitor Control.
 * @author Gokul.C (gokul.18ece@sonatech.ac.in)
 * @brief Monitoring Visitors
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
void setup() 
{
   lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(trig1,OUTPUT);
  pinMode(echo1,INPUT);
  pinMode(trig2,OUTPUT);
  pinMode(echo2,INPUT);
  pinMode(buzzer,OUTPUT);
  lcd.setCursor(4,0);
  lcd.print("Welcome");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Please wait.");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait..");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait...");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait....");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait.....");
  delay(200);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Please wait.");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait..");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait...");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait....");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait.....");
  delay(200);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Please wait.");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait..");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait...");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait....");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait.....");
  delay(200);
  lcd.setCursor(0,0);
  lcd.print("Please wait.....");
  delay(200);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Visitor Counter");
    lcd.setCursor(1,1);
  lcd.print("By GOKUL");
  delay(2500);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("People inside"); 
  lcd.setCursor(0,1);
  lcd.print("store:0");
  delayMicroseconds(10);
}

void loop() {
  
  
  digitalWrite(trig1,LOW);
  digitalWrite(trig2,LOW);
  delayMicroseconds(5);
 
  digitalWrite(trig1,HIGH);
  delay(1000);
  digitalWrite(trig2,HIGH);
  delayMicroseconds(10);
 
  
  digitalWrite(trig1,LOW);
  digitalWrite(trig2,LOW);
 
  
  int a = pulseIn(echo1,HIGH);
  int b = pulseIn(echo2,HIGH);
 
  
 int distance = a*0.034/2;
 int distance2 = b*0.034/2;
  
 int i,j; 

  if ( distance<40) //in
  {
    i=i+1;
    delay(500);
    tone(6,1000,250);
    delay(1000);
   
     
  
  }
  lcd.clear();
    lcd.setCursor(0,0);
  lcd.print("People entered:"); 
    lcd.setCursor(0,1);
  lcd.print(i);
    delay(4000);
    lcd.clear();
   if ( distance2<40) //out
  {
  j=j+1;
    delay(500);
    tone(6,500,250);
    delay(100);
     
    
  }
  
  
     lcd.setCursor(0,0);
  lcd.print("People exited:"); 
    lcd.setCursor(0,1);
  lcd.print(j); 
     delay(4000);
  lcd.setCursor(0,0);
  lcd.print("People inside"); 
    lcd.setCursor(0,1);
    int c=i-j;
    lcd.print(c); 
    delay(4000);
 
}
 