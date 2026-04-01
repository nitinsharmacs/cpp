#include <type_traits>
#include <iostream>
#include <typeinfo>
int main(int argc, char const *argv[])
{
    std::cout << typeid(std::common_type_t<long double, double>).name();

    short a{1};
    short b{2};

    std::cout << typeid(a + b).name();
    return 0;
}
