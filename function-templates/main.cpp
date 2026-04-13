#include <iostream>
#include <string>

template <typename T>
T addOne(T a)
{
    return a + 1;
}

int main(int argc, char const *argv[])
{
    using namespace std::literals::string_literals;
    std::cout << addOne("Hello world"s);
    return 0;
}
