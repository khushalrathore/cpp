#include <iomanip>
#include <iostream>
class Exercises {
 public:
  double calculatePiUsingLeibnizFormula(int terms) {
    double pi = 0.0;
    for (int i = 0; i < terms; ++i) {
      pi += (4.0 * ((i % 2 == 0) ? 1 : -1)) / (2 * i + 1);
    }
    return pi;
  }
};
int main() {
  Exercises eg;
  std::cout << std::fixed << std::setprecision(20)
            << eg.calculatePiUsingLeibnizFormula(1e6);
  return 0;
}