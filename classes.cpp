#include <iostream>

class Box {
public:
  double length;
  double width;
  double height;
};

int main() {
  Box box1;
  Box box2;
  double volume = 0.0;
  box1.height = 3.0;
  box1.width = 2.0;
  box1.length = 5.0;

  box2.height = 6.0;
  box2.width = 3.0;
  box2.length = 4.0;

  volume = box1.height * box1.width * box1.length;
  std::cout << "Volume of box1 is: " << volume << std::endl;

  volume = box2.height * box2.width * box2.length;
  std::cout << "Volume of box2 is: " << volume << std::endl;

  return 0;
}
