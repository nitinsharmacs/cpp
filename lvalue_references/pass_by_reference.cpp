#include <string>
#include <iostream>

void printString(std::string &value)
{
    value[1] = '4';
    std::cout << value << "\n";
}

int main(int argc, char const *argv[])
{
    std::string value{"Hello world"};
    printString(value);
    std::cout << value << "\n";
    return 0;
}
