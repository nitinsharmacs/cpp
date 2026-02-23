#include <iostream>

int main(int argc, char const *argv[])
{

    std::cout << "char to int\n";
    std::cout << static_cast<int>('A') << "\n";

    std::cout << "signed int to unsigned int\n";
    std::cout << static_cast<unsigned int>(-1) << "\n";

    std::cout << "unsigned int to signed int\n";
    std::cout << static_cast<signed int>(4294967295) << "\n";
    return 0;
}
