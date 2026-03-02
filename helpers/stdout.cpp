#include <string_view>
#include <iostream>

void print(double value)
{
    std::cout << value << "\n";
}

void print(int value)
{
    std::cout << value << "\n";
}

void print(std::string_view value)
{
    std::cout << value << "\n";
}