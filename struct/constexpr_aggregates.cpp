#include <iostream>

struct Point
{
    int x{};
    int y{};

    constexpr int greaterCoordinate() const
    {
        return x < y ? y : x;
    }
};

void printPoint(Point p)
{
    std::cout << "{" << p.x << ", " << p.y << "}\n";
}

int main(int argc, char const *argv[])
{
    constexpr Point p{1, 2};
    printPoint(p);

    constexpr int greater{p.greaterCoordinate()};
    std::cout << "Greater coordinate: " << greater << "\n";
    return 0;
}
