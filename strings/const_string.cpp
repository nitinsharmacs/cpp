#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    using namespace std::literals::string_literals;
    const std::string name{"Hello world"s};
    name[0] = "h";
    return 0;
}
