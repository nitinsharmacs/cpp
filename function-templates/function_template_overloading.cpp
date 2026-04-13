#include <iostream>

template <typename T>
auto add(T a, T b)
{
    return a + b;
}

template <typename T, typename U>
auto add(T a, U b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    std::cout << add(1, 2) << "\n";     // add<int>(int,int);
    std::cout << add(1.0, 2) << "\n";   // add<double,int>(double, int)
    std::cout << add(1.0, 2.5) << "\n"; // add<double>(double, double)
    return 0;
}
