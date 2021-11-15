#include "maskBox.h"
#include <iostream>

MaskBox::MaskBox(int top, int bottom, int right, int left, char c, AsciiArt *picture) : 
            Decorator{top, bottom, left, right, c, picture} {}
            
char MaskBox::charAt(int row, int col, int numTicks) {
    if(picture->charAt(row, col, numTicks) != ' ') {
        if(col >= left && col <= right) {
            if(row <= bottom && row >= top) {
                return c;
            }
        }
    }
    return picture->charAt(row, col, numTicks);
}

MaskBox::~MaskBox() {}