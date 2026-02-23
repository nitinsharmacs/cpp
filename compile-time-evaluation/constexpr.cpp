#include <iostream>

int getfactor()
{
    return 1;
}

int main(int argc, char const *argv[])
{

    constexpr int a{getfactor()};

    std::cout << a << std::endl;
    return 0;
}
