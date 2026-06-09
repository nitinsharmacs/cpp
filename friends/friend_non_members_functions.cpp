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

    friend void print(const Point &p);
};

void print(const Point &p)
{
    std::cout << "Point {" << p.m_x << ", " << p.m_y << "}\n";
}

// friend non-member function to multiple classes
// I could not find a good example, so using dummy names for classes.

class B; // forward declaration
class A
{
    int m_value{};

public:
    A() = default;
    A(int value)
        : m_value{value}
    {
    }

    // using B's forward declaration here
    friend void printAB(const A &a, const B &b);
};

class B
{
    int m_value{};

public:
    B() = default;
    B(int value)
        : m_value{value}
    {
    }

    friend void printAB(const A &a, const B &b);
};

void printAB(const A &a, const B &b)
{
    std::cout << "A{" << a.m_value << "}\n";
    std::cout << "B{" << b.m_value << "}\n";
}

int main(int argc, char const *argv[])
{
    Point p{1, 2};
    print(p);

    A a{1};
    B b{2};

    printAB(a, b);
    return 0;
}
