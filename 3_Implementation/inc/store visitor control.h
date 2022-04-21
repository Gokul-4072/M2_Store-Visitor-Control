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
int trig1 = 10;
int trig2 = 8;
int echo2 =7;
int echo1 = 9;
int buzzer= 6;
int i=0;
#include <LiquidCrystal.h>
/**
 * @brief LED displays people count
  @return Used to give sound in buzzer
 */
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);