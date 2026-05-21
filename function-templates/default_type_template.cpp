#include <iostream>

template <typename T = int>
void printValue(T value)
{
    std::cout << value << "\n";
}

int main(int argc, char const *argv[])
{
    printValue(1.3);
    return 0;
}
