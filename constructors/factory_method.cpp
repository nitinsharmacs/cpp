#include <iostream>
#include <optional>

class Point
{
    int m_x{};
    int m_y{};

private:
    Point(int x, int y)
        : m_x{x}, m_y{y}
    {
        m_x = x;
        m_y = y;
        std::cout << "Constructor Point(" << x << ", " << y << ")\n";
    }

public:
    void print() const
    {
        std::cout << "{" << m_x << ", " << m_y << "}\n";
    }
    friend std::optional<Point> createPoint(int x, int y);
};

std::optional<Point> createPoint(int x, int y)
{
    if ((x < 0) || (y < 0))
    {
        return {};
    }

    return Point{x, y};
}

int main(int argc, char const *argv[])
{
    const std::optional<Point> point{createPoint(1, 2)};

    if (point)
    {
        point.value().print();
    }
    return 0;
}
