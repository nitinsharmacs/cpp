#include <iostream>
#include <cstdint>

enum Color
{
    red,
    green,
    blue,
    orange = 10,
};

enum Theme : std::int8_t
{
    dark,
    light
};

int main(int argc, char const *argv[])
{
    Color value{static_cast<Color>(10)};

    std::cout << value << "\n";
    std::cout << std::boolalpha << (orange == value) << "\n";

    Theme theme{1};
    std::cout << theme << "\n";

    return 0;
}
