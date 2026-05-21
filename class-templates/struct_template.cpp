#include <iostream>

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

template <typename T>
void print(T p)
{
    std::cout << "{" << p.a << ", " << p.b << "}" << "\n";
}

int main(int argc, char const *argv[])
{
    Collection<int, double> c{1, 2.3};
    printCollection(Collection<int, double>{1, 2.3});
    printCollection<double, int>(Collection<double, int>{3.5, 4});
    print(Collection<double, double>{1.22, 3.22});
    return 0;
}
