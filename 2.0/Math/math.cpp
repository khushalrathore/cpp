#include <cmath>
#include <iostream>
#define SEPARATOR                                                              \
  std::cout << "\n-----------------------------------------------------------" \
               "--------\n";

void ceil(int negative, int positive, int zero = 0) {
  SEPARATOR;
  std::cout << "ceil(" << negative << ")\t:\t" << std::ceil(negative) << '\n';
  std::cout << "ceil(" << positive << ")\t:\t" << std::ceil(positive) << '\n';
  std::cout << "ceil(" << zero << ")\t\t:\t" << std::ceil(zero) << '\n';
}
void floor(int negative, int positive, int zero = 0) {
  SEPARATOR;
  std::cout << "floor(" << negative << ")\t:\t" << std::floor(negative) << '\n';
  std::cout << "floor(" << positive << ")\t:\t" << std::floor(positive) << '\n';
  std::cout << "floor(" << zero << ")\t:\t" << std::floor(zero) << '\n';
}
void round(int negative, int positive, int zero = 0) {
  SEPARATOR;
  std::cout << "round(" << negative << ")\t:\t" << std::round(negative) << '\n';
  std::cout << "round(" << positive << ")\t:\t" << std::round(positive) << '\n';
  std::cout << "round(" << zero << ")\t:\t" << std::round(zero) << '\n';
}
void abs(int negative, int positive, int zero = 0) {
  SEPARATOR;
  std::cout << "abs(" << negative << ")\t:\t" << std::abs(negative) << '\n';
  std::cout << "abs(" << positive << ")\t\t:\t" << std::abs(positive) << '\n';
  std::cout << "abs(" << zero << ")\t\t:\t" << std::abs(zero) << '\n';
}
void signbit(int negative, int positive, int zero = 0) {
  SEPARATOR;
  std::cout << "signbit(" << negative << ")\t:\t" << std::signbit(negative)
            << '\n';
  std::cout << "signbit(" << positive << ")\t:\t" << std::signbit(positive)
            << '\n';
  std::cout << "signbit(" << zero << ")\t:\t" << std::signbit(zero) << '\n';
}
void exp(int negative, int positive, int zero = 0) {
  SEPARATOR;
  std::cout << "exp(" << negative << ")\t:\t" << std::exp(negative) << '\n';
  std::cout << "exp(" << positive << ")\t\t:\t" << std::exp(positive) << '\n';
  std::cout << "exp(" << zero << ")\t\t:\t" << std::exp(zero) << '\n';
}
void log(int negative, int positive, int zero = 0) {
  SEPARATOR;
  std::cout << "log(" << negative << ")\t:\t" << std::log(negative) << '\n';
  std::cout << "log(" << positive << ")\t\t:\t" << std::log(positive) << '\n';
  std::cout << "log(" << zero << ")\t\t:\t" << std::log(zero) << '\n';
}
void log2(int negative, int positive, int zero = 0) {
  SEPARATOR;
  std::cout << "log2(" << negative << ")\t:\t" << std::log2(negative) << '\n';
  std::cout << "log2(" << positive << ")\t:\t" << std::log2(positive) << '\n';
  std::cout << "log2(" << zero << ")\t\t:\t" << std::log2(zero) << '\n';
}
void log10(int negative, int positive, int zero = 0) {
  SEPARATOR;
  std::cout << "log10(" << negative << ")\t:\t" << std::log10(negative) << '\n';
  std::cout << "log10(" << positive << ")\t:\t" << std::log10(positive) << '\n';
  std::cout << "log10(" << zero << ")\t:\t" << std::log10(zero) << '\n';
}
void operations() {
  double a = -10;
  double b = 10;
  ceil(a, b);
  floor(a, b);
  round(a, b);
  abs(a, b);
  signbit(a, b);
  exp(a, b);
  log(a, b);    // base e
  log2(a, b);   // base 2
  log10(a, b);  // base 10
}
int main() {
  //   operations();
  char a{65};
  std::cout << a << '\n';
  std::cout << static_cast<char>(static_cast<int>(a)) << '\n';
  std::cout << static_cast<char>(static_cast<int>(a) + 32) << '\n';
  return 0;
}