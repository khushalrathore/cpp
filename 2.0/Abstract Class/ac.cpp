#include <iostream>

class Shape {
 private:
  std::string m_description;

 protected:
  Shape() = default;
  Shape(const std::string_view description) : m_description(description) {};

 public:
  virtual ~Shape() = default;
  virtual double perimeter() const = 0;
  virtual double area() const = 0;
};

class Circle : public Shape {
 private:
  double m_radius{};

 public:
  Circle(int radius = 1) : m_radius(radius) {};
  virtual double perimeter() const override { return (2 * M_PI * m_radius); }
  virtual double area() const override { return (M_PI * pow(m_radius, 2)); }
};

int main() {
  std::cout << "Hey\n";
  Circle circle1{4};
  std::cout << circle1.area() << "\n";
  std::cout << circle1.perimeter() << "\n";
  return 0;
}