#ifndef MOVING_BOX
#define MOVING_BOX
#include "asciiart.h"
#include "decorator.h"

class MovingBox : public Decorator {
        char dir;
    public:
        MovingBox(int top, int bottom, int right, int left, char c, char dir, AsciiArt *picture);
        virtual char charAt(int row, int col, int numTicks) override;
        virtual ~MovingBox();
};

#endif