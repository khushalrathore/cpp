#include <iostream>

class Math {
 private:
  int value;

 public:
  Math(int initialValue) : value(initialValue) {}

  Math& add(int number) {
    value += number;
    return *this;
  }
  Math& subtract(int number) {
    value -= number;
    return *this;
  }
  Math& multiply(int number) {
    value *= number;
    return *this;
  }
  void print() const {
    std::cout << "Current value: " << this->value << std::endl;
  }
};

int main() {
  Math a(10);
  a.add(5).subtract(3).multiply(2).print();
  return 0;
}
