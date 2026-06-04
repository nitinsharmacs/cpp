#include <iostream>

class Point
{
    int m_x{};
    int m_y{};
    int m_z{};

public:
    Point() = default;

    Point(int x, int y)
        : Point{x, y, 0}
    {
        std::cout << "Constructing using Point(x, y)\n";
    }

    Point(int x, int y, int z)
        : m_x{x}, m_y{y}, m_z{z}
    {
        std::cout << "Constructing using Point(x, y, z)\n";
    }

    void print() const
    {
        std::cout << "{" << m_x << ", " << m_y << ", " << m_z << "}\n";
    }
};

int main(int argc, char const *argv[])
{
    Point{}.print();
    Point{1, 2}.print();
    Point{1, 2, 3}.print();

    return 0;
}
