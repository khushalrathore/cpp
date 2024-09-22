#include <iostream>

template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <typename T>
concept MyIterable = std::is_same_v<T, std::string>;

auto add(const MyIntegral auto &a, const MyIntegral auto &b) { return a + b; }
template <MyIterable T>
T add(const T a, const T b) {
  return a + b;
}

int main() {
  int a = 0;
  int b = -12;
  std::string greet("Hello");
  std::string username("Khushal");
  std::cout << add(a, b) << "\n";
  std::cout << add(std::string("Hey"), std::string(", You")) << "\n";
  return 0;
}