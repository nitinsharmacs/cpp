#include <iostream>

class Point
{
    int m_x{};
    int m_y{};

public:
    Point(int x, int y)
    {
        std::cout << "Constructor Point(" << x << ", " << y << ")\n";
    }

    void print() const
    {
        std::cout << "{" << m_x << ", " << m_y << "}\n";
    }
};

int main(int argc, char const *argv[])
{
    const Point point{1, 2};

    point.print();

    return 0;
}
