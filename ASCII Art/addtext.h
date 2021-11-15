#ifndef _ADD_TEXT_
#define _ADD_TEXT_
#include <iostream>
#include "observer.h"
#include "studio.h" 
#include "asciiart.h" 

class AddText : public Observer {

    Studio *s;
    int top, bottom, right, left;
    std::ostream &out = std::cout;
    
    public:
        AddText(int top, int bottom, int right, int left, Studio *s);
        virtual void notify() override;
        ~AddText();
};

#endif