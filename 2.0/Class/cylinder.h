#ifndef CYLINDER_H
#define CYLINDER_H

#include <iomanip>
#include <iostream>
#include <sstream>

class Cylinder {
 private:
  float m_radius{1};
  float m_height{1};

  std::string getDimensions(float radius, float height) const {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2);
    oss << "\nDimensions\t:\t{ r : " << radius << ", h : " << height << " }\n";
    return oss.str();
  }

  std::string calculateVolume(float radius, float height) const {
    std::ostringstream oss;
    float volume = M_PI * std::pow(radius, 2) * height;
    oss << std::fixed << std::setprecision(2);
    oss << "Volume\t\t:\t" << volume << " cb. unit\n\n";
    return oss.str();
  }

 public:
  Cylinder() = default;
  Cylinder(float r, float h) : m_radius(r), m_height(h) {}

  auto operator+(const Cylinder& other) {
    return Cylinder(m_radius + other.m_radius, m_height + other.m_height);
  }

  void display() const {
    std::cout << getDimensions(m_radius, m_height);
    std::cout << calculateVolume(m_radius, m_height);
  }
};
#endif
