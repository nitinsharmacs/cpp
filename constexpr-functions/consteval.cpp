#include <iostream>

consteval int max(int a, int b)
{
    return a < b ? b : a;
}

int main(int argc, char const *argv[])
{
    int arg{1};
    int result{max(3, 2)};
    std::cout << max(2, arg);
    return 0;
}
