#include <iostream>
#include <limits>

int main() {
  std::cout << "\n----------------[ Minimun, Maximum ]-----------------\n\n";
  std::cout << "CHAR\t:\t[ "
            << static_cast<int>(std::numeric_limits<char>::min()) << ", "
            << static_cast<int>(std::numeric_limits<char>::max()) << " ]\n";
  std::cout << "SHORT\t:\t[ " << std::numeric_limits<short>::min() << ", "
            << std::numeric_limits<short>::max() << " ]\n";
  std::cout << "INT\t:\t[ " << std::numeric_limits<int>::min() << ", "
            << std::numeric_limits<int>::max() << " ]\n";
  std::cout << "LONG\t:\t[ " << std::numeric_limits<long>::min() << ", "
            << std::numeric_limits<long>::max() << " ]\n";
  std::cout << "FLOAT\t:\t[ " << std::numeric_limits<float>::min() << ", "
            << std::numeric_limits<float>::max() << " ]\n";
  std::cout << "DOUBLE\t:\t[ " << std::numeric_limits<double>::min() << ", "
            << std::numeric_limits<double>::max() << " ]\n";

  std::cout << "\n----------------[Lowest, Denormalized Minimum, Normalized "
               "Minimum]-----------------\n\n";

  std::cout << "FLOAT\t:\t[ " << std::numeric_limits<float>::lowest() << ", "
            << std::numeric_limits<float>::denorm_min() << ", "
            << std::numeric_limits<float>::min() << " ]\n";

  std::cout << "DOUBLE\t:\t[ " << std::numeric_limits<double>::lowest() << ", "
            << std::numeric_limits<double>::denorm_min() << ", "
            << std::numeric_limits<double>::min() << " ]\n";

  std::cout << "LDOUBLE\t:\t[ " << std::numeric_limits<long double>::lowest()
            << ", " << std::numeric_limits<long double>::denorm_min() << ", "
            << std::numeric_limits<long double>::min() << " ]\n\n\n";

  return 0;
}