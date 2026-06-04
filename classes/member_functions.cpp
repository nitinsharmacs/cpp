#include <iostream>

class Point
{
    int m_x{};
    int m_y{};

public:
    void setX(int x);
    void setY(int y);
};

void Point::setX(int x)
{
    m_x = x;
}
void Point::setY(int x)
{
    m_x = x;
}

int main(int argc, char const *argv[])
{
    return 0;
}
