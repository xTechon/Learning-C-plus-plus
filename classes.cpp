#include <iostream>

class Box {
  // public variables can be accessed anywhere
public:
  double length;
  double width;
  double height;
  // declare a new function
  double getVolume(void);
  Box(double l, double w, double h); // class constructor
};

// define a function declared earlier
// class definitions must be declared before defining outside of the class
double Box::getVolume(void) { return length * width * height; }

Box::Box(double l, double w, double h) : length(l), width(w), height(h) {
  std::cout << "a box has been created" << std::endl;
}

int main() {
  Box box1(3.0, 2.0, 5.0);
  Box box2(6.0, 3.0, 4.0);
  double volume = 0.0;
  /*
  box1.height = 3.0;
  box1.width = 2.0;
  box1.length = 5.0;

  box2.height = 6.0;
  box2.width = 3.0;
  box2.length = 4.0;
  */
  volume = box1.height * box1.width * box1.length;
  std::cout << "Volume of box1 is: " << volume << std::endl;

  volume = box2.height * box2.width * box2.length;
  std::cout << "Volume of box2 is: " << volume << std::endl;

  box1.height = 10;
  std::cout << "Volume of box1 is: " << box1.getVolume() << std::endl;

  return 0;
}
