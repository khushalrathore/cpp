#include <iostream>

void postfix_operations(int n) {
  int a{n};
  std::cout << "-----------Postfix-----------\n";
  std::cout << "a++ : " << a++ << '\n';
  std::cout << "a : " << a << '\n';
  std::cout << "a++ : " << a++ << '\n';
  std::cout << "a : " << a << '\n';
  std::cout << "-----------Postfix end-----------\n";
}

void prefix_operations(int n) {
  int a{n};
  std::cout << "-----------Prefix-----------\n";
  std::cout << "++a : " << ++a << '\n';
  std::cout << "a : " << a << '\n';
  std::cout << "++a : " << ++a << '\n';
  std::cout << "a : " << a << '\n';
  std::cout << "-----------Prefix end-----------\n";
}

int main() {
  int a = 8;
  postfix_operations(a);
  prefix_operations(a);
}