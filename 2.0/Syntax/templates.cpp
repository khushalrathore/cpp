#include <iostream>

template <typename T1, typename T2>
auto maximum(const T1& a, const T2& b) -> decltype(a > b ? a : b) {
  return a > b ? a : b;
}
template <typename T1, typename T2>
auto minimum(const T1& a, const T2& b) -> decltype(a < b ? a : b) {
  return a < b ? a : b;
}

int main() {
  std::cout << maximum(1, 2) << "\n";
  std::cout << maximum(-0.11, 1) << "\n";
  std::cout << maximum(std::string_view("Hello"), std::string_view("Hi"))
            << "\n";

  std::cout << minimum(1, 2) << "\n";
  std::cout << minimum(-0.11, 1) << "\n";
  std::cout << minimum(std::string_view("Hello"), std::string_view("Hi"))
            << "\n";
  return 0;
}