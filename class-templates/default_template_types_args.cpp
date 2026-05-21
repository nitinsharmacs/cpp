#include <iostream>

template <typename T = int, typename U = int>
struct Collection
{
    T a{};
    U b{};
};

template <typename T, typename U>
void printCollection(Collection<T, U> p)
{
    std::cout << "{" << p.a << ", " << p.b << "}" << "\n";
}

int main(int argc, char const *argv[])
{
    Collection c1{1, 2};
    printCollection(c1);

    Collection c2;
    printCollection(c2);
    return 0;
}
