#include "blinkingBox.h"
#include <iostream>

BlinkingBox::BlinkingBox(int top, int bottom, int right, int left, char c, AsciiArt *picture) : 
            Decorator{top, bottom, left, right, c, picture} {}
            
char BlinkingBox::charAt(int row, int col, int numTicks) {
    if(col >= left && col <= right) {
        if(row <= bottom && row >= top) {
            if(numTicks % 2 == 0) {
                return c;
            }
        }
    }
    return picture->charAt(row, col, numTicks);
}

BlinkingBox::~BlinkingBox() {}