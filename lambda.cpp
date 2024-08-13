#include <iostream>

int main()
{
    auto twice = [](int x)
    {
        return x * 2;
    };

    std::cout << twice(2);
    return 0;
}
