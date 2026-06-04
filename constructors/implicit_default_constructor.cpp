#include <iostream>

class Point
{
    int m_x{};
    int m_y{};

public:
    void print() const
    {
        std::cout << "{" << m_x << ", " << m_y << "}\n";
    }
};

int main(int argc, char const *argv[])
{
    Point{}.print();

    return 0;
}
