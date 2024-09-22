#include <iostream>
/*
  requires std::integral<T>
only allows integeral value to be passed in the function
similary
  requires std::floating_point<T> for float values

*/
template <std::integral T>  //
T add(T a, T b) {
  return a + b;
}

template <typename T>
T subtract(T a, T b)
  requires std::floating_point<T>
{
  return a + b;
}
int main() {
  std::cout << add(1, 2) << "\n";
  std::cout << subtract(1.1, 2.2) << "\n";
  return 0;
}