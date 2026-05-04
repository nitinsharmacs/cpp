#include <iostream>

int getValue()
{
    return 1;
}

int main(int argc, char const *argv[])
{
    int value{1};
    int &val_ref{value};

    std::cout << value << "\n";
    std::cout << val_ref << "\n";

    const int &ref{getValue()};
    return 0;
}
