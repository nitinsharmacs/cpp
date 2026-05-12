#include <iostream>

const int &getValue()
{
    static int value{5};
    return value;
}

const int &getLiteral()
{
    return 5;
}

const int &identity(const int &value)
{
    return value;
}

int main(int argc, char const *argv[])
{
    const int &ref{getValue()};

    std::cout << ref << "\n";

    // std::cout << getLiteral() << "\n"; // it will most probably crash

    int value{100};
    const int &iref = identity(value);

    std::cout << iref << "\n";

    const int &result{identity(5)};

    std::cout << result << "\n";      // has 5 as temporary object present
    std::cout << identity(5) << "\n"; // has 5 as temporary object present

    const int &anotherresult{getLiteral()};
    std::cout << anotherresult << "\n";
    return 0;
}
