#include <iostream>
#include <iomanip>

struct SomeStruct
{
    int b{};
    short a{};
};

int main(int argc, char const *argv[])
{
    std::cout << std::left;

    std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
    std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
    std::cout << std::setw(16) << "SomeStruct:" << sizeof(SomeStruct) << " bytes\n";
    return 0;
}
