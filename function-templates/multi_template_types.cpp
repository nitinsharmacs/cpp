#include <iostream>
#include <type_traits>

template <typename T, typename U>
std::common_type_t<T, U> min(T a, U b);

int main(int argc, char const *argv[])
{
    std::cout << min(5, 4.2);
    return 0;
}

template <typename T, typename U>
std::common_type_t<T, U> min(T a, U b)
{
    return a < b ? a : b;
}

// template <typename T, typename U>
// auto min(T a, U b) -> std::common_type_t<T, U>;

// int main(int argc, char const *argv[])
// {
//     std::cout << min(5, 4.2);
//     return 0;
// }

// template <typename T, typename U>
// auto min(T a, U b) -> std::common_type_t<T, U>
// {
//     return a < b ? a : b;
// }