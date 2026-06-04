#include <iostream>

class Point
{
    int m_x{};
    int m_y{};

public:
    Point() = default;

    Point(int x, int y)
        : m_x{x}, m_y{y}
    {
        std::cout << "Constructing using Point(" << x << ", " << y << ")\n";
    }
    void print() const
    {
        std::cout << "{" << m_x << ", " << m_y << "}\n";
    }
};

int main(int argc, char const *argv[])
{
    Point().print();
    Point{}.print();

    Point p(1, 2);
    p.print();

    Point(2, 2).print();

    // defines a
    Point(p);
    p.print();
    return 0;
}
