#include <iostream>

#include "./cylinder.h"
int main() {
  std::cout << "Program : ";
  Cylinder *dyn{new Cylinder{10, 20}};
  dyn->display();
  delete dyn;
  dyn = nullptr;
  return 0;
}