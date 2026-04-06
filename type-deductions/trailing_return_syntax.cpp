#include <iostream>

auto add(int a, int b) -> int
{
    return a + b;
}

int main(int argc, char const *argv[])
{

    std::cout << add(1, 2) << "\n";
    return 0;
}
