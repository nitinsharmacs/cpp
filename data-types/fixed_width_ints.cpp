#include <iostream>
#include <cstdint>
#include <iomanip>

int main(int argc, char const *argv[])
{
    // std::cout << std::left;

    // std::cout << std::setw(16) << "int8_t:" << sizeof(int16_t) << " bytes\n";
    // std::cout << std::setw(16) << "int16_t:" << sizeof(int16_t) << " bytes\n";

    // int8_t num1{65};

    // std::cout << num1 << std::endl; // should print char "A"

    std::int16_t num2{32767};
    std::cout << num2 << std::endl;
    return 0;
}
