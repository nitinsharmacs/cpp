#include <iostream>

struct Pixel
{
    int x;
    int y;
};

struct Point
{
    int x;
    int y;
    int z;
};

int main(int argc, char const *argv[])
{
    Pixel a{1};

    std::cout << "---------- Accessing data members --------------\n";
    std::cout << a.x << "\n";
    std::cout << a.y << "\n";
    std::cout << "----------------------------\n";

    std::cout << "---------- Designated initialization --------------\n";
    Point point{.x{1}, .z{2}};

    std::cout << point.x << "\n";
    std::cout << point.y << "\n";
    std::cout << point.z << "\n";
    std::cout << "----------------------------\n";

    std::cout << "---------- Assignment with initializers list ------------\n";
    a = {2, 3};
    std::cout << a.x << "\n";
    std::cout << a.y << "\n";
    std::cout << "----------------------------\n";

    std::cout << "---------- Assignment with Designated initializers -------\n";
    point = {.x{1}, .y{2}};
    std::cout << point.x << "\n";
    std::cout << point.y << "\n";
    std::cout << point.z << "\n";
    std::cout << "----------------------------\n";

    std::cout << "---------- Initializing struct with same type struct -----\n";

    Pixel b{a};
    std::cout << b.x << "\n";
    std::cout << b.y << "\n";
    std::cout << "----------------------------\n";
    return 0;
}
