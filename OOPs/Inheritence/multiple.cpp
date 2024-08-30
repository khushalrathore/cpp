#include <iostream>
#include <iomanip>
#include "single.cpp"
#define SEPARATOR cout << "\n--------------------------------"
using namespace std;

class Human : public Mammal, public Aquatic
{
public:
    bool isIntelligent = true;
};

int main()
{
    Human h1;
    cout << fixed << boolalpha << "Is Intellient? \"" << h1.isIntelligent << "\"\n";
    h1.run("Runner");
    h1.swim("Swimmer");
}