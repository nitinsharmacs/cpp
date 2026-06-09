#include <iostream>
#include <cmath>

class Point
{
    int m_x{};
    int m_y{};

public:
    Point() = default;
    Point(int x, int y)
        : m_x{x}, m_y{y}
    {
    }

    friend class Line;
};

class Line
{

    Point m_start{};
    Point m_end{};

public:
    Line() = default;
    explicit Line(int x1, int y1, int x2, int y2)
        : m_start{Point{x1, y1}}, m_end{Point{x2, y2}}
    {
    }

    double length() const
    {
        double dx = m_start.m_x - m_end.m_x;
        double dy = m_start.m_y - m_end.m_y;
        return std::sqrt(dx * dx + dy * dy);
    }
};

int main(int argc, char const *argv[])
{
    Line l{1, 2, 3, 4};
    std::cout << l.length();
    return 0;
}
