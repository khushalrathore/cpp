#include <iostream>

/*
------------------------------------------------------------------------------------------
1. * => pointer
2. & => referece / address_of()
3. (*var) => dyanmically stored value //pointer variable
4. var => address of the location where pointer variable is pointing// &(*var)
5. &var => address at which this pointer variable itself is stored
------------------------------------------------------------------------------------------
*/

int main() {
  /* ASSIGN heap memory with "new" keyword */
  int *p_num1{new int{}};
  int *p_num2{new int{50}};

  std::cout << (*p_num1) << "\t,\t" << &(*p_num1) << "\t,\t" << &p_num1 << "\n";
  std::cout << (*p_num2) << "\t,\t" << (p_num2) << "\t,\t" << &p_num1 << "\n";

  /* FREE it using "delete" keyword */
  delete p_num1;
  delete p_num2;

  /* RESET the pointer i.e.assign "nullptr", prevent dangling pointer problem */
  p_num1 = p_num2 = nullptr;

  return 0;
}