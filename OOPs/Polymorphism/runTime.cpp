#include <iostream>
// also known as dynamic polymorphism ...fully dependant on Inheritance
using namespace std;

class functionOverridingExample
{
public:
    void speak()
    {
        cout << "Speaking...\n";
    }
};

class Human : public functionOverridingExample
{
    // no need to change the speak function function
};

class Dog : public functionOverridingExample
{
public:
    void speak()
    {
        cout << "Barking...\n"; // changed the speak function function
    }
};

int main()
{
    functionOverridingExample f;
    cout << "Someone Is ";
    f.speak();

    Human h1;
    cout << "Someone Is ";
    h1.speak();

    Dog d1;
    cout << "A Dog Is ";
    d1.speak();
}