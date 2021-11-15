#include "filledBox.h"
#include <iostream>

FilledBox::FilledBox(int top, int bottom, int right, int left, 
        char c, AsciiArt *picture) :
            Decorator{top, bottom, left, right, c, picture} {}
            
char FilledBox::charAt(int row, int col, int numTicks) {
    if(col >= left && col <= right) {
        if(row <= bottom && row >= top) {
            return c;
        }
    }
    return picture->charAt(row, col, numTicks);
}

FilledBox::~FilledBox() {}