#include "movingBox.h"

MovingBox::MovingBox(int top, int bottom, int right, int left, char c, char dir, AsciiArt *picture)
: Decorator{top, bottom, right, left, c, picture}, dir{dir} {}

char MovingBox::charAt(int row, int col, int numTicks) {
    if(dir == 'u') {
        if(col <= left && col >= right) {
            if(row <= (bottom - numTicks) && row >= (top - numTicks)) {
                return c;
            }
        }
    }    
    if(dir == 'd') {
        if(col <= left && col >= right) {
            if(row <= (bottom + numTicks) && row >= (top + numTicks)) {
                return c;
            }
        }
    }    
    if(dir == 'l') {
        if(col <= (left - numTicks) && col >= (right - numTicks)) {
            if(row <= bottom && row >= top) {
                return c;
            }
        }
    }        
    if(dir == 'r') {
        if(col <= (left + numTicks) && col >= (right + numTicks)) {
            if(row <= bottom && row >= top) {
                return c;
            }
        }
    }    
    return picture->charAt(row, col, numTicks);
}


MovingBox::~MovingBox() {}