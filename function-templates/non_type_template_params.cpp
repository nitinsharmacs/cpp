#include <iostream>

// template <int D>
// void print()
// {
//     std::cout << D << "\n";
// }

template <int D>
void print();

template <>
void print<5>()
{
    std::cout << 5 << "\n";
}

template <int N>
auto factorial()
{
    static_assert(N > -1, "Negative values not allowed.");

    int product{1};
    for (int i{2}; i <= N; ++i)
        product *= i;

    return product;
}

template <char N>
auto withConditionalLog(int value)
{
    if (N == 'y')
    {
        std::cout << "Value " << value << "\n";
    }
    return value;
}

template <int N>
constexpr int identity()
{
    constexpr int value{N};
    return value;
}

int main(int argc, char const *argv[])
{

    // std::cout << factorial<3>();
    // std::cout << factorial<-3>();
    // print<5>();

    std::cout << identity<1>();
    withConditionalLog<'y'>(1);
    withConditionalLog<'n'>(1);
    return 0;
}
