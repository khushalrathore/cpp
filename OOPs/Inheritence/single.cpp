#include <iostream>
#include <iomanip>
#include "../class_A.cpp"
#define SEPARATOR cout << "\n--------------------------------"
using namespace std;

class Mammal : public Animal
{
public:
    void run(string mammalType = "Look! A Mammal")
    {
        cout << mammalType << " is running. \n";
    }
};

class Aquatic : public Animal // since Animal has two sub classes ...its now an example of hierarchical inhertiance also
{
public:
    void swim(string aquaticType = "Look! An Aquatic Animal")
    {
        cout << aquaticType << " is swimming. \n";
    }
};

// int main()
// {
//     Mammal m;
//     m.speak();
//     m.speak("Mammal");
// }