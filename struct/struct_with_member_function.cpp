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

int main(int argc, char const *argv[])
{
    Point p{1, 2};
    p.print();

    Point{2, 2}.print();
    return 0;
}
