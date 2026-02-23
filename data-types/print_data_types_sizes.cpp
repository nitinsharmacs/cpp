#include <iostream>
#include <climits> // required for CHAR_BIT
#include <iomanip> // required for setw

int main(int argc, char const *argv[])
{
    std::cout << "A byte is " << CHAR_BIT << " bites on this system\n\n";

    std::cout << std::left;

    std::cout << std::setw(16) << "void:" << sizeof(void) << " bytes\n";
    std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
    std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
    std::cout << std::setw(16) << "unsigned short:" << sizeof(unsigned short) << " bytes\n";
    std::cout << std::setw(16) << "long long int:" << sizeof(long long int) << " bytes\n";
    std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";
    std::cout << std::setw(16) << "wchar_t:" << sizeof(wchar_t) << " bytes\n";
    std::cout << std::setw(16) << "char_8:" << sizeof(char8_t) << " bytes\n";
    std::cout << std::setw(16) << "char_16:" << sizeof(char16_t) << " bytes\n";
    std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
    std::cout << std::setw(16) << "nullptr_t:" << sizeof(std::nullptr_t) << " bytes\n";
    return 0;
}
