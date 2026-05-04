#include <iostream>

constexpr int min(int a, int b)
{
    return a < b ? a : b;
}

constexpr void doSomething(const int a)
{
    constexpr int value{a};
}

int main(int argc, char const *argv[])
{

    int arg{1}, arg2{2};
    int value2{min(arg, arg2)};          // no complain
    constexpr int value{min(arg, arg2)}; // fails to compile

    int result{min(1, 2)}; // can be used here
    constexpr int result2{min(1, 2)};
    return 0;
}
