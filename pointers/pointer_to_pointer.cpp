#include <iostream>

int main(int argc, char const *argv[])
{
    int **ipptr;

    int value{10};
    int *iptr{&value};

    ipptr = &iptr;

    std::cout << value << "\n";
    std::cout << *iptr << "\n";
    std::cout << **ipptr << "\n";
    return 0;
}
