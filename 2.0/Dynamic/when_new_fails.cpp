#include <iomanip>
#include <iostream>
int main() {
  int size{};
  std::cout << "Enter Range 0 to __ ";
  std::cin >> size;
  int* arr{new int[size]};
  std::cout << "OCT" << "\tDEC" << "\tHEX\n";
  for (size_t i = 0; i <= size; ++i) {
    *(arr + i) = i;
    std::cout << std::uppercase << std::showbase;
    std::cout << std::oct << *(arr + i) << "\t";
    std::cout << std::dec << *(arr + i) << "\t";
    std::cout << std::hex << *(arr + i) << "\t";
    std::cout << "\n";
  }

  std::cout << "...\n";
  delete[] arr;
  return 0;
}