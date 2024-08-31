#include <iostream>
// also known as static polymorphism
using namespace std;

class functionOverloadingExample
{
public:
    void sayHello()
    {
        cout << "Hello, YOU\n";
    }
    void sayHello(string name)
    {
        cout << "Hello, " + name + "\n";
    }
    int sayHello(string name, int a)
    {
        cout << "Hello, " + name + " " + to_string(a) + " \n";
        return a;
    }
};

class operatorOverloadingExample
{
public:
    int x, y;
    void operator+(const operatorOverloadingExample &obj)
    {
        int value1 = x;
        int value2 = obj.x;
        cout << value2 - value1;
    }
    void operator()()
    {
        cout << "\nMe bracket hu : " << this->x << '\n';
    }
};

int main()
{
    functionOverloadingExample f;
    f.sayHello();
    f.sayHello("Raj");
    f.sayHello("Raj", 1);

    operatorOverloadingExample a1, a2;
    a1.x = 1;
    a2.x = 5;
    a1 + a2; // gives a2-a1
    a1();
}