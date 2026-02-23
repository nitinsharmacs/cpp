#include <iostream>
#include <cstddef>
#include <typeinfo>

int main(int argc, char const *argv[])
{
    std::cout << "Size of 'std::size_t' type\n";
    std::cout << sizeof(std::size_t) << " bytes\n";

    std::cout << "Type of return value of 'sizeof operator'\n";
    std::cout << typeid(sizeof(std::size_t)).name() << "\n";
    // m means unsigned long type
    return 0;
}
