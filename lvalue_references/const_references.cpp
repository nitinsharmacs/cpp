#include <iostream>

int main(int argc, char const *argv[])
{
    // const int value{1};
    // const int &ref{value};
    // const int &ref2{5};

    // int anothervalue{3};
    // const int &ref3{anothervalue};

    // const double &ref4{anothervalue};
    // std::cout << ref4 << "\n";

    // const double &ref5{5};

    // int value{5};

    // const double &ref{value};

    // value = value - 1;

    // std::cout << value << ref << "\n";

    const int value{1};
    int &ref{value};
    return 0;
}
