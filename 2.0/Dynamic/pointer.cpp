#include <iostream>
int main() {
  char my_char{65};
  char *p_char{&my_char};

  long double my_fraction{M_PI};
  long double *p_fraction{&my_fraction};

  std::cout << "Address : " << static_cast<void *>(p_char)
            << "\t,\tValue at this Address\t:\t" << *p_char
            << "\t,\tsizeof char,pointer\t\t:\t" << sizeof(my_char) * 8 << ", "
            << sizeof(p_char) * 8 << " bits\n";

  std::cout << "Address : " << static_cast<void *>(p_fraction)
            << "\t,\tValue at this Address\t:\t" << *p_fraction
            << "\t,\tsizeof long double,pointer\t:\t" << sizeof(my_fraction) * 8
            << ", " << sizeof(p_fraction) * 8 << " bits\n";

  const char *name{"Khushal"};  // this works
                                //   char *name{"Khushal"}; //this doesnt
  std::cout << name;

  char nameArr[]{" Rathore\n"};
  std::cout << nameArr;
}