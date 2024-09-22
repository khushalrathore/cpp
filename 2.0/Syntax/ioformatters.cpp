#include <iomanip>
#include <iostream>
void unformatted_table() {
  std::cout << std::endl << std::endl;

  std::cout << "Unformatted Table : ";
  std::cout << std::endl << std::endl;

  std::cout << "Daniel" << " " << "Kaluuya" << " " << "36" << std::endl;
  std::cout << "Jack" << " " << "Sparrow" << " " << "47" << std::endl;
  std::cout << "Omar" << " " << "Ehtramo" << " " << "29" << std::endl;
  std::cout << "Norman" << " " << "Osborn" << " " << "55" << std::endl;
  std::cout << std::endl << std::endl;
}

void formatted_table(int column_width = 15) {
  int col_width = column_width;
  std::cout << std::endl << std::endl;

  std::cout << "Formatted Table : ";
  std::cout << std::endl << std::endl;

  std::cout << std::left;          // justify left
  std::cout << std::setfill('-');  // fill with -
  std::cout << std::setw(col_width) << " FirstName " << std::setw(col_width)
            << " LastName " << std::setw(col_width) << " Age " << std::endl;
  std::cout << std::setfill(' ') << "" << std::endl;
  std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width)
            << "Kaluuya" << std::setw(col_width) << "36" << std::endl;
  std::cout << std::setw(col_width) << "Jack" << std::setw(col_width)
            << "Sparrow" << std::setw(col_width) << "47" << std::endl;
  std::cout << std::setw(col_width) << "Omar" << std::setw(col_width)
            << "Ehtramo" << std::setw(col_width) << "29" << std::endl;
  std::cout << std::setw(col_width) << "Norman" << std::setw(col_width)
            << "Osborn" << std::setw(col_width) << "55" << std::endl;

  std::cout << std::endl << std::endl;
}

void unformatted_boolean() {
  bool a{true};
  bool b{false};
  std::cout << a << ", " << b << std::endl;
}

void formatted_boolean() {
  bool a{true};
  bool b{false};
  std::cout << std::boolalpha << a << ", " << b << std::endl;

  std::cout << std::noboolalpha << a << ", " << b
            << std::endl;  // by default its noboolalpha ...i.e. no need to
                           // write nonoolalpha
}

void unformatted_number(int m = 20, int n = -20) {
  std::cout << m << ", " << n << std::endl;
}

void formatted_number(int m = 20, int n = -20) {
  std::cout << std::showpos << m << ", " << std::showpos << n << std::endl;
  std::cout << std::noshowpos << m << ", " << std::noshowpos << n << std::endl;
}

void unformatted_number_system(int m = 100, int n = 10) {
  std::cout << "OCT : " << m << ", " << n << std::endl;
  std::cout << "DEC : " << m << ", " << n << std::endl;
  std::cout << "HEX : " << m << ", " << n << std::endl << std::endl;

  std::cout << std::noshowbase << std::nouppercase;
  std::cout << "OCT : " << m << ", " << n << std::endl;
  std::cout << "DEC : " << m << ", " << n << std::endl;
  std::cout << "HEX : " << m << ", " << n << std::endl;
  std::cout << std::endl;
}

void formatted_number_system(int m = 100, int n = -20) {
  std::cout << std::showbase << std::uppercase;
  std::cout << "OCT : " << std::oct << m << ", " << n << std::endl;
  std::cout << "DEC : " << std::dec << m << ", " << n << std::endl;
  std::cout << "HEX : " << std::hex << m << ", " << n << std::endl << std::endl;

  std::cout << std::noshowbase << std::nouppercase;
  std::cout << "OCT : " << std::oct << m << ", " << n << std::endl;
  std::cout << "DEC : " << std::dec << m << ", " << n << std::endl;
  std::cout << "HEX : " << std::hex << m << ", " << n << std::endl;
  std::cout << std::endl;
}

void unformatted_floats(float n) { std::cout << n << std::endl; }

void formatted_floats(float n) {
  std::cout << std::fixed << std::setprecision(20) << n << std::endl;
}

int main() {
  unformatted_table();
  formatted_table();

  std::cout << "----------\n";

  unformatted_boolean();
  formatted_boolean();

  std::cout << "----------\n";

  unformatted_number(20, -10);
  formatted_number(20, -10);

  std::cout << "----------\n";

  unformatted_number_system(100, 10);
  formatted_number_system(100, 10);

  std::cout << "----------\n";

  unformatted_floats(M_PI);
  formatted_floats(M_PI);
}