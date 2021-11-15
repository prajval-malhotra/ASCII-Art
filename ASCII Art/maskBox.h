#ifndef MASK_BOX
#define MASK_BOX
#include "asciiart.h"
#include "decorator.h"

class MaskBox : public Decorator {
    
    public:
        MaskBox(int top, int bottom, int left, int right, char c, AsciiArt *picture);
        virtual char charAt(int row, int col, int numTicks) override;
        virtual ~MaskBox();
};

#endif