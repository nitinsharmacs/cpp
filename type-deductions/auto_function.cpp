#include <iostream>
#include <typeinfo>

auto add(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{

    std::cout << typeid(add(1, 2)).name() << "\n";
    return 0;
}
