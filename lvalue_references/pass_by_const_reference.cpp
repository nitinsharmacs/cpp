#include <string>
#include <iostream>

void printString(const std::string &value)
{
    std::cout << value << "\n";
}

auto div(const double &value)
{
    return value / 2;
}

int main(int argc, char const *argv[])
{
    using namespace std::string_view_literals;
    printString("Hello world"sv);

    std::cout << div(3);
    return 0;
}
