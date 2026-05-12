#include <iostream>

int main(int argc, char const *argv[])
{
    int *nptr{};
    std::cout << std::boolalpha << (nptr == nullptr) << "\n";

    if (nptr)
    {
        std::cout << "Not null pointer";
    }
    else
    {
        std::cout << "Null pointer";
    }

    int *iptr{0};
    std::cout << std::boolalpha << (iptr == nullptr) << "\n";

    int *pptr{NULL};
    std::cout << std::boolalpha << (pptr == nullptr) << "\n";

    std::nullptr_t p{nullptr};
    std::cout << p << "\n";
    return 0;
}
