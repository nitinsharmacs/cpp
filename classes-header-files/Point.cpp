#include <iostream>
#include "Point.h"

void Point::print() const
{
    std::cout << "Point{" << m_x << ", " << m_y << "}\n";
}