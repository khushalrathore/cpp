#include <iostream>

int main() {
  int a{50 * 10 / 5};
  int b{50 * (10 / 5)};
  int c{(50 * 10) / 5};
  std::cout << a << '\n' << b << '\n' << c << '\n';
}