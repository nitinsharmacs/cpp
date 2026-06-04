#include <iostream>

class Point
{
private:
    int m_x{};
    int m_y{};

public:
    Point() = default;
    constexpr Point(int x, int y)
        : m_x{x}, m_y{y}
    {
    }

    void print() const
    {
        std::cout << "Point(" << m_x << ", " << m_y << ")\n";
    }
    constexpr int greaterCoordinate() const
    {
        return m_x < m_y ? m_y : m_x;
    }
};

class Pair
{
};

int main(int argc, char const *argv[])
{
    constexpr Pair p{};
    // constexpr Point p{1, 2};
    // p.print();

    // constexpr int greater{p.greaterCoordinate()};
    // std::cout << "Greater coordinate: " << greater << "\n";
    return 0;
}
