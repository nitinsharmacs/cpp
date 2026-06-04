#include <iostream>

class Point
{
public:
    int x{};
    int y{};
};

void printPoint(Point p)
{
    std::cout << p.x << ", " << p.y << "\n";
}

int main(int argc, char const *argv[])
{
    printPoint(Point{1, 2});
    return 0;
}
