#ifndef _ADD_GRAPHICS_
#define _ADD_GRAPHICS_
#include <iostream>
#include <vector>
#include "observer.h"
#include "studio.h" 
#include "window.h"
#include "subject.h"

class AddGraphics : public Observer {

    Studio *s;
    int top, bottom, right, left;
    Xwindow w{((bottom - top + 1) * 10), 
              ((right - left + 1) * 10)};
    
    public:
        AddGraphics(int top, int bottom, int right, int left, Studio *s);
        virtual void notify() override;
        ~AddGraphics();
};

#endif