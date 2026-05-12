#include <iostream>

int main(int argc, char const *argv[])
{
    int value{100};
    int *iptr{&value};

    std::cout << value << "\n";
    std::cout << *iptr << "\n";

    *iptr = 200;

    std::cout << value << "\n";
    std::cout << *iptr << "\n";

    int *ptr;
    std::cout << ptr << "\n";

    return 0;
}
