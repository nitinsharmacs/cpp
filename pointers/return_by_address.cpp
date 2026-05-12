#include <iostream>

const int *getValue()
{
    static const int value{100};
    return &value;
}
int main(int argc, char const *argv[])
{
    const int *resultptr{getValue()};
    std::cout << *resultptr << "\n";
    return 0;
}
