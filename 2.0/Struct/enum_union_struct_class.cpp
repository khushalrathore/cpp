#include <iostream>

namespace custom {
enum class Colors { RED = 1, BLUE = 2, GREEN = 3 };

namespace Color {
constexpr double RED = 1.10;
constexpr double BLUE = 1.20;
constexpr double GREEN = 1.30;
};  // namespace Color

enum en {
  INT_CONSTANT_FIRST = 69,
  INT_CONSTANT_SECOND = 420,
};

union un {
  float a;
  int b;
};

struct st {
  float a;
  int b;
};

class cl {
 public:
  float a;
  int b;
};
}  // namespace custom
using custom::cl;
using custom::Colors;
using custom::en;
using custom::st;
using custom::un;
namespace fmt {
void printHeading(un &u, st &s, cl &c, en *e) {
  std::cout << "\n[union](" << sizeof(un) << "B)"
            << "\t\t\t\t[struct](" << sizeof(st) << "B)"
            << "\t\t\t\t[class](" << sizeof(cl) << "B)" << "\t\t\t\t[enum]("
            << sizeof(en) << "B)\n";
}

void printDataTypeInfo(un &u, st &s, cl &c, en *e) {
  std::cout << "&u : " << &u << sizeof(u) << "\t\t\t"
            << "&s : " << &s << sizeof(s) << "\t\t\t"
            << "&c : " << &c << sizeof(c) << "\t\t\t" << "&e1 : " << &e
            << sizeof(en) << "\n";
}
void printMemberOneInfo(un &u, st &s, cl &c, en &e1) {
  // replacing u.a with *(int*)(float*)(&u.a) i.e. reverse engineering 😎 the
  // output statement will print 90 as int

  std::cout << "u.a : " << &u.a << ", " << u.a << "\t\t"
            << "s.a : " << &s.a << ", " << s.a << "\t\t\t"
            << "c.a : " << &c.a << ", " << c.a << "\t\t\t"
            << "e1 : " << &e1 << ", " << e1 << "\n";
}
void printMemberTwoInfo(un &u, st &s, cl &c, en &e2) {
  std::cout << "u.b : " << &u.b << ", " << u.b << "\t\t\t"
            << "s.b : " << &s.b << ", " << s.b << "\t\t\t"
            << "c.b : " << &c.b << ", " << c.b << "\t\t\t"
            << "e2 : " << &e2 << ", " << e2 << "\n\n";
}
}  // namespace fmt

namespace operation {
void assignValueToMemberOne(un &u, st &s, cl &c) {
  u.a = 10.0f;
  s.a = 11.0f;
  c.a = 11.0f;
}
void assignValueToMemberTwo(un &u, st &s, cl &c) {
  // since only one value/memory address can be active in an union at
  // a time, instance 'a' i.e 'u.a' will now have 'int(90)' as float (bit
  // pattern of int 90 as float, not 90.0f) ....not 'float(90)' it'll be ---->
  // '*(float*)(int*)&b'
  //[address of 'b'->pointer_cast to int-> pointer_cast to float -> dereference]

  u.b = 90;
  s.b = 90;
  c.b = 90;
}
}  // namespace operation

int main() {
  constexpr int color_value1 = static_cast<int>(Colors::BLUE);  // 2
  constexpr int color_value2 =
      custom::Color::BLUE;  // gives 1... BLUE i.e. 1.20->narrows down to->1
                            // (namespaces
                            //  don't provide typesafety thus using enum class
                            //  is better)
  std::cout << color_value1 << "\n";
  std::cout << color_value2 << "\n";

  un u;
  st s;
  cl c;
  // ENUMS ARE'NT CONTAINERS
  en e1 = en::INT_CONSTANT_FIRST;
  en e2 = en::INT_CONSTANT_SECOND;
  en e[2] = {e1, e2};

  operation::assignValueToMemberOne(u, s, c);
  operation::assignValueToMemberTwo(u, s,
                                    c);  // union does something different here
  fmt::printHeading(u, s, c, e);
  fmt::printDataTypeInfo(u, s, c, e);
  fmt::printMemberOneInfo(u, s, c, e1);
  fmt::printMemberTwoInfo(u, s, c, e2);
}
