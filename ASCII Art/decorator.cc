#include "decorator.h"

// class Decorator : public AsciiArt {
//     protected:
//         int top, bottom, right, left;
//         char c;
//         AsciiArt *picture;
    
//     public:
//         Decorator(AsciiArt *picture);
//         virtual charAt(int row, int col, int tick) = 0;
//         virtual ~Decorator();
// };

Decorator::Decorator(int top, int bottom, int left, int right, char c, AsciiArt *picture) : 
top{top}, bottom{bottom}, right{right}, left{left}, c{c}, picture{picture} {}

Decorator::~Decorator() { delete picture; }