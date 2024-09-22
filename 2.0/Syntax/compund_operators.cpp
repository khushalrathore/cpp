#include <iostream>

int main() {
  int a = 9;
  a += 5;  // a = a + 5 --->14
  a *= 5;  // a = a * 5 --->70
  a -= 5;  // a = a * 5 --->65
  a /= 5;  // a = a * 5 --->13
  std::cout << a << '\n';
}