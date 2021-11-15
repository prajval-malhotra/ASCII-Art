#include "addgraphics.h"

AddGraphics::AddGraphics(int top, int bottom, int right, int left, Studio *s)
              : top{top}, bottom{bottom}, right{right}, left{left}, s{s} {
                    s->attach(this);
                }

void AddGraphics::notify() {
    for(int i = top; i <= bottom; i++) {
        for(int j = left; j <= right; j++) {
            char cur = s->getState(i, j);
            int newj = ((j - left) * 10);
            int newi = ((i - top) * 10);
            if(cur >= 'a' && cur <= 'z')  
            w.fillRectangle(newj, newi, 10, 10, Xwindow::Red);
            else if(cur >= 'A' && cur <= 'Z')  
            w.fillRectangle(newj, newi, 10, 10, Xwindow::Green);
            else if(cur >= '0' && cur <= '9')  
            w.fillRectangle(newj, newi, 10, 10, Xwindow::Blue);
            else if(cur == ' ')  
            w.fillRectangle(newj, newi, 10, 10, Xwindow::White);
            else w.fillRectangle(newj, newi, 10, 10, Xwindow::Black);
        }
    }

}

AddGraphics::~AddGraphics() {
    s->detach(this);
}