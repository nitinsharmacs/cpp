#include <string_view>
#include <iostream>

void print(double value)
{
    std::cout << value << "\n";
}

void print(int value, char delimiter = '\n')
{
    std::cout << value << delimiter;
}

void print(std::string_view value)
{
    std::cout << value << "\n";
}