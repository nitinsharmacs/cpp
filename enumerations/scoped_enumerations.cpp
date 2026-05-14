#include <iostream>
#include <utility>

enum class Color
{
    red,
    green,
    blue,
};

enum class Feelings
{
    happy,
    sad,
};

int main(int argc, char const *argv[])
{
    Color value{1};
    std::cout << std::to_underlying(Color::green) << "\n";
    std::cout << static_cast<int>(Color::green) << "\n";
    return 0;
}
