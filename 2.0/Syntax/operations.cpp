#include <iostream>

template <typename T1, typename T2>
auto add(T1 a, T2 b) -> decltype(a + b) {
  return a + b;
}

template <typename T1, typename T2>
auto subtract(T1 a, T2 b) -> decltype(a - b) {
  return a - b;
}

template <typename T1, typename T2>
auto multiplication(T1 a, T2 b) -> decltype(a * b) {
  return a * b;
}

template <typename T1, typename T2>
auto division(T1 a, T2 b) -> decltype(a / b) {
  return a / b;
}

template <typename T1, typename T2>
auto modulus(T1 a, T2 b) -> decltype(a % b) {
  return a % b;
}

int main() {
  auto a{1.99f};
  double b{pow(2, 12)};
  std::cout << add(a, b) << "\n";
  std::cout << subtract(a, b) << "\n";
  std::cout << multiplication(a, b) << "\n";
  std::cout << division(a, b) << "\n";
  std::cout << modulus(static_cast<int>(a), static_cast<int>(b)) << "\n";
  return 0;
}
