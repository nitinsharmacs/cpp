#include <iostream>
#include <cstdint>

enum Color : std::int64_t
{
    red,
    green,
    blue,
};

int main(int argc, char const *argv[])
{
    Color value{green};

    std::cout << sizeof(value) << "\n";
    std::cout << value << "\n";
    return 0;
}
