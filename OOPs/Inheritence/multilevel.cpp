#include <iostream>
#include <iomanip>
#include "single.cpp"
#define SEPARATOR cout << "\n--------------------------------"
using namespace std;

class Dog : public Mammal
{
};
class Fish : public Aquatic
{
};

int main()
{
    Animal a1;
    Dog d1;
    Fish f1;
    a1.speak();
    d1.speak("Dog");
    d1.run("Dog");
    f1.swim("Piranha");
}