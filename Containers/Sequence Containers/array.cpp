#include <array>
#include <iostream>

using namespace std;

void b()
{
  int b[4] = {2, 4, 6, 8};
  int sizeBasic = sizeof(b) / sizeof(b[0]);
  cout << "sizeof(b) / sizeof(b[0]) : " << sizeBasic << "\nb[i] : ";
  for (int i = 0; i < sizeBasic; i++)
  {
    cout << b[i] << " ";
  }
  cout << "\n";
  cout << "b[3] : " << b[3];
}
void s()
{
  array<int, 4> s = {1, 3, 5, 7};
  int sizeStl = s.size();
  cout << "s.size() : " << sizeStl << "\ns[i] : ";
  for (int i = 0; i < sizeStl; i++)
  {
    cout << s[i] << " ";
  }
  cout << "\n";
  cout << "s.at(3) : " << s.at(3) << "\n";
  cout << "s.empty() #bool: " << s.empty();
  cout << "s.front() : " << s.front() << "\n";
  cout << "s.back() : " << s.back();
}

void formatter()
{
  cout << "\nBASIC ARRAY------------------------------\n\n";
  b();
  cout << "\n------------------------------------------\n";

  cout << "\n\nSTL ARRAY--------------------------------\n\n";
  s();
  cout << "\n------------------------------------------\n\n";
}
int main()
{
  formatter();
  return 0;
}