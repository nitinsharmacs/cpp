#include <iostream>

int getfactor()
{
    return 1;
}

constexpr int value{1};
int main(int argc, char const *argv[])
{

    constexpr int a{value};

    std::cout << a << std::endl;
    return 0;
}
