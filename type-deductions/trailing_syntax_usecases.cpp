#include <iostream>
#include <type_traits>
#include <typeinfo>

auto divide(int a, float b) -> std::common_type_t<decltype(a), decltype(b)>
{
    return a / b;
}

int main(int argc, char const *argv[])
{
    std::cout << typeid(divide(1, 2)).name() << "\n";
    return 0;
}
