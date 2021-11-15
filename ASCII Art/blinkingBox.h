#ifndef BLINKING_BOX
#define BLINKING_BOX
#include "decorator.h"

class BlinkingBox : public Decorator {
    public:
        BlinkingBox(int top, int bottom, int left, int right, char c, AsciiArt *picture);
        virtual char charAt(int row, int col, int numTicks) override;
        virtual ~BlinkingBox();
};

#endif