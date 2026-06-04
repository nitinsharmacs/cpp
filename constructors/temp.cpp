#include <iostream>
#include <string>

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
void printPoint(Point p)
{
    p.print();
}

int main(int argc, char const *argv[])
{
    printPoint(4, 5);
    return 0;
}
