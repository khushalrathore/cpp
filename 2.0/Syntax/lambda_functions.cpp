#include <iostream>
/*
[capture_list](parameters)->return_type{operations};
*/
int main() {
  auto sumLogger = [](int a, int b) -> void {
    std::cout << a << "\t+\t" << b << "\t=\t" << a + b << "\n";
  };
  sumLogger(10, pow(10, 3));

  double var1{10.92}, var2{0.29};
  auto subtract = [var1, var2]() { return var1 - var2; };
  std::cout << var1 << "\t-\t" << var2 << "\t=\t" << subtract() << "\n\n";

  float a{0.01};
  float b{0.02};
  float c{0.03};
  [&]() {  //[=] to capture all by val.....[&] to capture all by reference
    a++;
    b++;
    c++;
    std::cout << a << "\n" << b << "\n" << c << "\n\n";
  }();
  std::cout << a << "\n" << b << "\n" << c << "\n\n";

  a = 10;
  b = 20;
  c = 90;
  std::cout << a << "\n" << b << "\n" << c << "\n\n";
  return 0;
}
