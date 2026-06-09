#ifndef POINT_H
#define POINT_H

class Point
{

private:
    int m_x{};
    int m_y{};

public:
    Point() = default;
    Point(int x, int y)
        : m_x{x}, m_y{y}
    {
    }

    void print() const;
};
#endif