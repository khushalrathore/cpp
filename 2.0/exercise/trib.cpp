#include <iostream>

void trib_sequence(int n) {
  size_t t1{}, t2{1}, t3{1}, tnext{};
  if (n >= 1) {
    std::cout << t1 << ", ";
  }
  if (n >= 2) {
    std::cout << t2 << ", ";
  }
  if (n >= 3) {
    std::cout << t3 << ", ";
  }

  for (int i = 4; i <= n; ++i) {
    tnext = t1 + t2 + t3;

    std::cout << tnext << ", ";
    t1 = t2;
    t2 = t3;
    t3 = tnext;
  }
}

void display() {
  int n = (std::cin >> n, n);
  std::cout << "tribonacci(" << n << ") : ";
  trib_sequence(n);
  std::cout << "\b\b";
}

int main() {
  display();
  return 0;
}