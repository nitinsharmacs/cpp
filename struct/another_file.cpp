#include <iostream>

struct Point
{
    void print()
    {
        std::cout << x << ", " << y << "|" << "\n";
    }

    int x{};
    int y{};
};