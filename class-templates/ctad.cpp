// CTAD: class template argument deduction
#include <iostream>
#include <utility>

template <typename T, typename U>
struct Collection
{
    T a;
    U b;
};

template <typename T, typename U>
void printCollection(Collection<T, U> p)
{
    std::cout << "{" << p.a << ", " << p.b << "}" << "\n";
}

// ctad guide rule for C++17
template <typename T, typename U>
Collection(T, U) -> Collection<T, U>;

template <typename T, typename U>
void printPair(std::pair<T, U> p)
{
    std::cout << "[" << p.first << ", " << p.second << "]" << "\n";
}

int main(int argc, char const *argv[])
{
    Collection c{1, 2};
    printCollection(c);

    std::pair<int, int> p{1, 2};

    printPair(p);
    return 0;
}
