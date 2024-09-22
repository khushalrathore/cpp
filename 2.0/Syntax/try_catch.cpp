#include <iostream>
#include <stdexcept>

int main() {
  double a = 100;
  double x{};
  std::cout << "Divide 100 in x parts: //enter x --> ";
  std::cin >> x;

  try {
    if (x == 0) {
      throw std::runtime_error("Error: Division by zero is not allowed.\n");
    }
    std::cout << "Each part is now " << a / x << "\n";
  } catch (const std::runtime_error &ex) {
    std::cout << ex.what();
  }

  return 0;
}
