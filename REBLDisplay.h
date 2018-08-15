
#ifndef REBLDisplay_h
#define REBLDisplay_h

#include "Arduino.h"
#include "LiquidCrystal.h"
#include "Defines.h"

enum color_vars {BLACK, RED , GREEN , YELLOW , BLUE , PURPLE , CYAN , WHITE};
#define LCD_ENABLE_PIN A0 // New ↓
#define LCD_RS_PIN A1
#define LCD_D1 5    
#define LCD_D2 4
#define LCD_D3 3
#define LCD_D4 7

void initLCD(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t);
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

