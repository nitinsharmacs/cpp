#include <iostream>

void printInt(const int *ptr)
{
    if (!ptr)
        return;

    std::cout << *ptr << "\n";
}

int main(int argc, char const *argv[])
{
    int value{5};
    printInt(&value);

    int *iptr{&value};
    printInt(iptr);

    printInt(nullptr); // will crash the program if nullptr check not used.

    return 0;
}
