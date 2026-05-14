#include <iostream>

enum Color
{
    red,
    green,
    blue,
};

enum Feelings
{
    happy,
    sad,
};

namespace NFeelings
{
    enum Feelings
    {
        happy,
        sad,
        blue,
    };
}

int main(int argc, char const *argv[])
{
    Color color{blue};

    std::cout << std::boolalpha << (blue == NFeelings::blue) << "\n";
    std::cout << NFeelings::blue << "\n";
    std::cout << color << "\n";

    std::cout << (red == happy) << "\n";
    return 0;
}
