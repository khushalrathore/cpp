#include <iostream>
int main() {
  const char message[]{"Hello"};  // in the backend ...its actually Hello\0
                                  // ...and \0 is a null terminator/ character
  std::cout << strlen(message) << '\n';  // strlen finds length till it hits \0
  std::cout << std::size(message) << '\n';  //
  std::cout << sizeof(message) << '\n';

  return 0;
}