#include <iostream>

int main(int argc, char const *argv[])
{
    bool value{};

    std::cout << "Enter a boolean value" << std::endl;

    std::cin >> std::boolalpha;
    std::cin >> value;

    std::cout << std::endl;

    std::cout << value;
    return 0;
}
