#include <iostream>
#include <string>

template <typename T>
concept TinyType = requires(T t) {
  sizeof(T) <= 4;
  requires sizeof(T) <= 4;
};

template <typename T>
T add(T a, T b)
  requires(std::integral<T> || std::floating_point<T>) && TinyType<T>
{
  return a + b;
}

int main() {
  std::cout << std::string_view{"Hey"};

  int x{6};
  int y{4};

  float m{5.5};
  float n{4.33};

  double p{0.003};
  double q{0.007};

  std::cout << add(x, y) << "\n";
  std::cout << add(m, n) << "\n";
  std::cout << sizeof(bool) << "\n";
  std::cout << sizeof(int) << "\n";

  /*  std::cout << add(p, q) << "\n";  // wont run bcoz double is 8byte datatype
   */
  return 0;
}