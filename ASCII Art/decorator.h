#ifndef DECORATOR
#define DECORATOR
#include "asciiart.h"

class Decorator : public AsciiArt {
    protected:
        int top, bottom, right, left;
        char c;
        AsciiArt *picture;
    
    public:
        Decorator(int top, int bottom, int right, int left, char c, AsciiArt *picture);
        virtual char charAt(int row, int col, int tick) = 0;
        virtual ~Decorator();
};

#endif