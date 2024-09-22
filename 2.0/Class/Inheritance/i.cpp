#include <any>
#include <iostream>

#include "../cylinder.h"

class hollow : public Cylinder {
 private:
  float m_thickness{10};

 public:
  hollow(float r, float h, float t) : Cylinder(r, h), m_thickness(t) {}

  void display() const {
    Cylinder::display();
    std::cout << "Thickness\t:\t" << m_thickness << " units\n";
  }
};

int main() {
  hollow a{5, 10, 2};
  a.display();
  return 0;
}
