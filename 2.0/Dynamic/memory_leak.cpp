#include <iostream>
int main() {
  int number = 1000;
  int *p_number{new int{123}};
  /*
    p_number = &number;
    // This would cause a memory leak because p_number is
    // already pointing to dynamically allocated memory (123). After reassigning
    // p_number to &number, you lose the reference to the allocated memory and
    // cannot free it.
  */
  std::cout << *p_number;

  int *p_number2{new int(23)};
  //   p_number2{new int(34)}; //cant do this(double allocation) either
  delete p_number2;
  delete p_number;
  p_number = p_number2 = nullptr;
}
