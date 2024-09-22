#include <iostream>
int main() {
  int age{34};
  int &refAge{age};
  refAge++;
  std::cout << age << '\n';
  const int &refAgeConst{age};
  //   refAgeConst++;  // const mean immutable
  std::cout << refAgeConst << '\n';
}