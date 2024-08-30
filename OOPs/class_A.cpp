#include <iostream>
#include <iomanip>
#define SEPARATOR cout << "\n--------------------------------"
using namespace std;

static int sr_no = 1;

class Animal
{
public:
  void speak(string animalType = "Look! An Animal")
  {
    cout << animalType << " is speaking.\n";
  }
};

// int main()
// {
//   Animal a;
//   a.speak();
// }
