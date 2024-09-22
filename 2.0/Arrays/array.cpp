#include <iostream>
#include <numeric>
#include <vector>

template <typename T>
void print(const T &a, int size) {
  std::cout << "Elements : [ ";
  for (int i = 0; i < size - 1; ++i) {
    std::cout << a[i] << ", ";
  }
  std::cout << a[size - 1];
  std::cout << " ]\n";
}

template <typename T>
void fill(T &a, int size) {
  for (int i = 0; i < size; i++) {
    a[i] = (i);
  }
}

int main() {
  int static_array[5];
  fill(static_array, 5);
  print(static_array, 5);

  std::vector<int> vect(5);
  //   fill(vect, 5);
  std::iota(vect.begin(), vect.end(),
            1e3);  // using numeric header
  print(vect, 5);
  std::cout << std::size(static_array);
  return 0;
}