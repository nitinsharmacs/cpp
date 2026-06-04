#include <iostream>

struct Point
{

    int x{};
    int y{};

    void print() const
    {
        std::cout << x << ", " << y << "\n";
    }

    void printMsg()
    {
        std::cout << "Non const member function \n";
    }

    void printMsg() const
    {
        std::cout << "const member function \n";
    }
};

int main(int argc, char const *argv[])
{
    const Point p{1, 2};
    p.print();

    p.printMsg();

    Point p2{3, 4};
    p2.printMsg();
    return 0;
}
