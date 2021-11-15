#include "addtext.h"

AddText::AddText(int top, int bottom, int right, int left, Studio *s) : 
                top{top}, bottom{bottom}, right{right}, left{left}, s{s} {
                    s->attach(this);
                }

void AddText::notify() {
  out << '+';
  for (int j = left; j <= right; ++j) out << '-';
  out << '+' << std::endl;
  for (int i = top; i <= bottom; ++i) {
    out << '|';
    for (int j = left; j <= right; ++j) {
      out << s->getState(i, j);
    }
    out << '|' << std::endl;
  }
  out << '+';
  for (int j = left; j <= right; ++j) out << '-';
  out << '+' << std::endl;
}

AddText::~AddText() {
    s->detach(this);
}