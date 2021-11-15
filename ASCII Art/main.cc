#include <iostream>
#include <vector>
#include <memory>
#include "asciiart.h"
#include "blank.h"
#include "studio.h"
#include "filledBox.h"
#include "blinkingBox.h"
#include "movingBox.h"
#include "maskBox.h"
#include "addtext.h"
#include "addgraphics.h"
#include "window.h"

int main () {
  AsciiArt *canvas = new Blank;
  
  Studio s{canvas};
  std::string command;
  // Creating a vector of Observers to store each new
  // graphical/text observer
  std::vector <Observer *> observers; 

  while (std::cin >> command) {
    if (command == "render" ) {
      s.render();
    }
    else if (command == "animate") {
      int n;
      std::cin >> n;
      s.animate(n);
    }
    else if (command == "reset") {
      s.reset();
    }
    else if (command == "filledbox") {
      int top, bottom, left, right;
      char what;
      std::cin >> top >> bottom >> left >> right >> what;
      // same as q2
      s.picture() = new FilledBox(top, bottom, right, left, what, s.picture());
    }
    else if (command == "blinkingbox") {
      int top, bottom, left, right;
      char what;
      std::cin >> top >> bottom >> left >> right >> what;
      // same as q2
      s.picture() = new BlinkingBox(top, bottom, right, left, what, s.picture());
    }
    else if (command == "movingbox") {
      int top, bottom, left, right;
      char what, dir;
      std::cin >> top >> bottom >> left >> right >> what >> dir;
      // same as q2
      s.picture() = new MovingBox(top, bottom, right, left, what, dir, s.picture());
    }
    else if (command == "maskbox") {
      int top, bottom, left, right;
      char what;
      std::cin >> top >> bottom >> left >> right >> what;
      // same as q2
      s.picture() = new MaskBox(top, bottom, right, left, what, s.picture());
    }
    else if (command == "addtext") {
      int top, bottom, left, right;
      std::cin >> top >> bottom >> left >> right;
      // adding new text observer to the Observers vector
      observers.emplace_back(new AddText{top, bottom, right, left, &s});
    }
    else if (command == "addgraphics") {
      int top, bottom, left, right;
      std::cin >> top >> bottom >> left >> right;
      // adding new graphical observer to the Observers vector
      observers.emplace_back(new AddGraphics{top, bottom, right, left, &s});
    }
  }
  
  // deleting dynamically allocated observers
  for (auto it = observers.begin(); it != observers.end();  ++it) {
    delete *it;
  }
}
