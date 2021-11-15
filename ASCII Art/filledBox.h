#ifndef FILLED_BOX
#define FILLED_BOX
#include "asciiart.h"
#include "decorator.h"

class FilledBox : public Decorator {
    
    public:
        FilledBox(int top, int bottom, int left, int right, char c, AsciiArt *picture);
        virtual char charAt(int row, int col, int numTicks) override;
        virtual ~FilledBox();
};

#endif