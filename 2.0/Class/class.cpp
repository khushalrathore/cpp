#include <iostream>

#include "./cylinder.h"

int main() {
  Cylinder a{};
  a.display();

  Cylinder b{1, 2}, c{3, 4};
  b.display();
  c.display();

  Cylinder Cy1{b + c};  // using operator+() overloading
  Cy1.display();
}
