#include <iostream>

template <typename T, typename U>
struct Collection
{
    T a;
    U b;
};

template <typename T, typename U>
using Pair = Collection<T, U>;

template <typename T>
using IntPair = Collection<T, int>;

template <typename T, typename U>
void printCollection(Pair<T, U> p)
{
    std::cout << "{" << p.a << ", " << p.b << "}" << "\n";
}

int main(int argc, char const *argv[])
{
    Pair p1{1, 2};
    printCollection(p1);

    Pair p2{1, 2};
    printCollection(p2);

    using IntCollection = Collection<int, int>;
    IntCollection c1{1, 2};
    printCollection(c1);

    IntPair<float> p3{1.4, 3};
    printCollection(p3);

    IntPair p4{1.4, 3};
    printCollection(p4);
    return 0;
}
