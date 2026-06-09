#include <iostream>
#include <cmath>

class Line
{
public:
    class Point
    {
    public:
        int m_x{};
        int m_y{};
        Point() = default;
        Point(int x, int y)
            : m_x{x}, m_y{y}
        {
        }
    };

    Point m_start{};
    Point m_end{};
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

std::ostream &operator<<(std::ostream &cout, Line::Point &p)
{
    cout << "(" << p.m_x << ", " << p.m_y << ")";
    return cout;
}

std::ostream &operator<<(std::ostream &cout, Line &l)
{
    std::cout << l.m_start;
    std::cout << "-------- ";
    std::cout << l.length();
    std::cout << " --------";
    std::cout << l.m_end << "\n";
    return cout;
}

int main(int argc, char const *argv[])
{
    Line l{1, 2, 3, 4};
    std::cout << l;
    return 0;
}
