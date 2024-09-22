#include <iomanip>
#include <iostream>

template <typename T>
void print_value_and_address(const T &p, std::string name = "var") {
  std::cout << "{ \n\t" + name + " : " + std::to_string(p) + ",\n\t" + "&(" +
                   name + ") : "
            << (&p) << "\n}";
}

int main() {
  int number{90};
  int *p_number{&number};
  int &refNumber{number};
  print_value_and_address(number, "number");
  std::cout << ",\n";
  print_value_and_address(*p_number, "*p_number");
  std::cout << ",\n";
  print_value_and_address(refNumber, "refNumber");

  return 0;
}