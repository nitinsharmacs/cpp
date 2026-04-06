#include <iostream>
#include <typeinfo>

int main(int argc, char const *argv[])
{
    auto value{1};
    std::cout << typeid(value).name() << "\n";

    value = 1.12;
    std::cout << typeid(value).name() << "\n";

    auto value2{1.24};
    std::cout << typeid(value2).name() << "\n";

    return 0;
}
