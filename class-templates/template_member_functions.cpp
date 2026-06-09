#include <iostream>

template <typename T, typename U>
class Pair
{
    T m_a{};
    U m_b{};

public:
    Pair() = default;
    Pair(const T &a, const U &b)
        : m_a{a}, m_b{b}
    {
    }

    bool isEqual(const Pair &anotherPair)
    {
        return m_a == anotherPair.m_a && m_b == anotherPair.m_b;
    }

    void print()
    {
        std::cout << "{" << m_a << ", " << m_b << "}\n";
    }

    Pair add(const Pair &anotherPair);
};

template <typename T, typename U>
Pair<T, U> Pair<T, U>::add(const Pair &anotherPair)
{
    return Pair{m_a + anotherPair.m_a, m_b + anotherPair.m_b};
}

int main(int argc, char const *argv[])
{
    Pair p1{1, 2.4};
    p1.print();

    std::cout << std::boolalpha << p1.isEqual(Pair{1, 2.4}) << "\n";

    p1.add(Pair{1, 2.4}).print();
    return 0;
}
