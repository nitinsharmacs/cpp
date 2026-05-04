#include <iostream>

constexpr int constExprFn()
{
    return 1;
}

int nonConstExprFn()
{
    return 10;
}

constexpr int doSomething(bool isConsexpr)
{
    if (isConsexpr)
        return constExprFn();
    else
        return nonConstExprFn();
}

int main(int argc, char const *argv[])
{
    constexpr int value{doSomething(true)};
    std::cout << doSomething(true);
    return 0;
}
