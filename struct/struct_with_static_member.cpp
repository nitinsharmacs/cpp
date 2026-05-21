#include <iostream>

struct Foo
{
    int a{};
    constexpr static int b{1};
};

int main(int argc, char const *argv[])
{
    Foo a{};
    std::cout << a.b << "\n";

    Foo b{};
    std::cout << b.b << "\n";

    return 0;
}
