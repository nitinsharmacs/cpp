#include <iostream>

void print(int value, char delimiter)
{
    std::cout << value << delimiter;
}
int main(int argc, char const *argv[])
{
    print(1);
    return 0;
}

void print(int value, char delimiter = '\n');