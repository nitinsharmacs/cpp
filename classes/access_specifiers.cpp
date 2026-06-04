#include <iostream>

class Point
{

private:
    int m_x{};
    int m_y{};

public:
    void print() const
    {
        std::cout << m_x << ", " << m_y << "\n";
    }

    int x() const
    {
        return m_x;
    }

    int y() const
    {
        return m_y;
    }

    void setX(int x)
    {
        m_x = x;
    }

    void setY(int y)
    {
        m_y = y;
    }
};

int main(int argc, char const *argv[])
{
    Point p{};
    p.print();

    p.setX(4);
    p.setY(6);
    p.print();
    return 0;
}
