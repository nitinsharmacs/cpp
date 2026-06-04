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

    // copy constructor
    Point(const Point &obj)
        : m_x{obj.m_x}, m_y{obj.m_y}
    {
        std::cout << "Using copy constructor Point(const Point&)\n";
    }

    void print() const
    {
        std::cout << "{" << m_x << ", " << m_y << "}\n";
    }
};

// pass by value should call Point copy constructor to create copy of argument.
void printPoint(Point p)
{
    p.print();
}

Point createPoint(int a, int b)
{
    Point x{a, b};
    return x;
}

int main(int argc, char const *argv[])
{
    // Point x{1, 2};
    // Point p{x};

    // printPoint(x);

    Point y{createPoint(1, 2)};
    // createPoint(1, 2).print();
    // printPoint(y);
    return 0;
}
