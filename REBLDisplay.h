
#ifndef REBLDisplay_h
#define REBLDisplay_h

#include "Arduino.h"
#include "LiquidCrystal.h"
#include "Defines.h"

enum color_vars {BLACK, RED , GREEN , YELLOW , BLUE , PURPLE , CYAN , WHITE};



void initLCD(LCD_RS_PIN, LCD_ENABLE_PIN, LCD_D1, LCD_D2, LCD_D3, LCD_D4); // New
void doBacklight();
void setColor(color_vars);
void doDisplay();
void displayTextLeft(int, int, int, const char*);
void displayTextLeft(int, int, int, const __FlashStringHelper*);
void displayTextRight(int, int, int, const char*);
void displayLineLeft(int ,const char* );
void displayLineLeft(int ,const __FlashStringHelper* );
void displayLineRight(int ,const char* );
void displayLabelAndValue(int ,const char* ,int);
void doCursor();
void setCursor(uint8_t, uint8_t);
void showCursor(boolean);





#endif

