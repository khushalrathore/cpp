#include <iostream>
#include <numeric>

void remove(int*& ptr) {
  delete[] ptr;
  ptr = nullptr;
}

int main() {
  size_t size = 5;
  int* arr = new int[size]{10, 20, 30, 40, 50};
  //   std::iota(arr, arr + size, 1);
  for (size_t i = 0; i < size; ++i) {
    std::cout << arr[i] << " ";
  }

  std::cout << "\n";
  remove(arr);
  return 0;
}
