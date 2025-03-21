#ifdef _DRAWING_H_
#define _DRAWING_H_

#include "mailbox.h"

void drawCharacter(char ch, int x, int y);
void ColorCh(char ch, int x, int y, uint16_t color);
void drawString(char str[]);
void ColorSt(char ch, int x, int y, uint16_t color);

#endif