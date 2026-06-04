#include <iostream>

class Point
{
    int m_x{};
    int m_y{};

public:
    Point() // default constructor
        : m_x{1}, m_y{1}
    {
        std::cout << "Default constructor Point()\n";
    }

    // Point(int x = 1, int y = 1) // default constructor
    //     : m_x{x}, m_y{y}
    // {
    //     std::cout << "Constructor with default args Point(1, 1)\n";
    // }

    Point(int x, int y = 1)
        : m_x{x}, m_y{y}
    {
        std::cout << "Constructor with one default arg y Point(x, y=1)\n";
    }

    void print() const
    {
        std::cout << "{" << m_x << ", " << m_y << "}\n";
    }
};

int main(int argc, char const *argv[])
{
    Point{}.print();
    Point{2}.print();

    return 0;
}
