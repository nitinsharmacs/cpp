#include <iostream>
#include <string>

void print(double value)
{
    std::cout << value;
}

void print(std::string value)
{
    std::cout << value;
}

int main(int argc, char const *argv[])
{
    print(1);
    return 0;
}
