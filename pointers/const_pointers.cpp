#include <iostream>

int main(int argc, char const *argv[])
{
    int value{100};
    int* const cptr{&value};

    *cptr = 200; // it will work as const pointer is pointing non-const

    int anothervalue{1};
    cptr = &anothervalue; // it will fail.

    std::cout << value << "\n";
    std::cout << *cptr << "\n";
    return 0;
}
