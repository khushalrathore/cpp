#include <iostream>

struct Point {
  double m_x{};
  double m_y{};

  double operator-(const Point& obj) const {
    return sqrt(pow((m_x - obj.m_x), 2) + pow((m_y - obj.m_y), 2));
  }
  Point(double pointX, double pointY) : m_x(pointX), m_y(pointY) {
    std::cout << "Constructor Called\n";
  }
  ~Point() { std::cout << "Destructor Called\n"; }
};

template <typename T>
void plot(const T& obj) {
  if constexpr (std::is_pointer_v<T>) {
    std::cout << "( " << obj->m_x << ", " << obj->m_y << " )\n";
  } else {
    std::cout << "( " << obj.m_x << ", " << obj.m_y << " )\n";
  }
}

void distance(const Point& obj1, const Point& obj2) {
  std::cout << "Distance: " << obj1 - obj2 << "\n";
}

int main() {
  Point a{1, 2};
  plot(a);
  Point* b = new Point{3, 4};
  plot(b);

  distance(a, *b);

  delete b;
  b = nullptr;  // Avoid dangling pointer

  return 0;
}
