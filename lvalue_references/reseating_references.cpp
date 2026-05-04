#include <iostream>

int main(int argc, char const *argv[])
{
    int value{1};
    int &ref{value};

    std::cout << value << ref << "\n";

    int anothervalue{2};
    ref = anothervalue;

    std::cout << value << ref << "\n";
    return 0;
}
