#include <iostream>
#include <type_traits>

constexpr int max(int a, int b)
{
    if (std::is_constant_evaluated())
        return 10;

    return a < b ? b : a;
}

constexpr int min(int a, int b)
{
    if consteval
    {
        return 10;
    }

    return a < b ? a : b;
}

int main(int argc, char const *argv[])
{
    int result{max(1, 2)};
    std::cout << result << "\n";
    constexpr int result2{min(1, 2)};
    std::cout << result2 << "\n";
    return 0;
}
