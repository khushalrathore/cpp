#include <iostream>

void fib_sequence(int n) {
  size_t t1{}, t2{1}, tnext{};

  if (n >= 1) {
    std::cout << t1 << ", ";
  }

  if (n >= 2) {
    std::cout << t2 << ", ";
  }

  for (int i = 3; i <= n; ++i) {
    tnext = t1 + t2;
    std::cout << tnext << ", ";
    t1 = t2;
    t2 = tnext;
  }
}

void display() {
  size_t n = (std::cin >> n, n);
  std::cout << "fibonacci(" << n << ") : ";
  fib_sequence(n);
  std::cout << "\b\b";
}

int main() {
  display();
  return 0;
}