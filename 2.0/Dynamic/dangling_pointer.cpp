#include <iostream>
int main() {
  int *p_num{};

  // program will crash without this "p_num != nullptr" check
  if (p_num != nullptr) {
    std::cout << p_num << " " << *p_num << "\n";
  }

  p_num = new int{230};

  if (p_num != nullptr) {
    std::cout << p_num << ", " << *p_num << "\n";
  }

  delete p_num;
  p_num = nullptr;
  if (p_num == nullptr) {
    std::cout << "SAFE -- p_num is set to nullptr i.e. 0x0" << "\n";
  } else {
    std::cout << "UNSAFE -- p_num is not set to nullptr." << "\n";
  }
  return 0;
}