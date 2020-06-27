#include "Arduino.h"
#include "Screens.h"

void initScreen();
void screenControllerLoop();
void handleTap(uint8_t x, uint8_t y);
void handleLeftSwipe();
void handleRightSwipe();
void handleUpSwipe();
void handleDownSwipe();
void handleButtonPress();
void drawAppIndicator();
