#include <iostream>
int main() {
  int number = 5;
  std::cout << "\n   VARIABLE\t\t" << "VALUE\t\t" << "  ADDRESS\n";
  std::cout << "    number\t\t  " << number << "\t\t" << &number << "\n";
  int &refNumber = number;
  refNumber++;
  std::cout << "    refNumber\t\t  " << refNumber << "\t\t" << &refNumber
            << "\n";
  std::cout << "    number\t\t  " << number << "\t\t" << &number << "\n\n";
}