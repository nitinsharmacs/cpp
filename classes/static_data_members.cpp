#include <iostream>

class Counter
{
public:
    static int count;                  // only declaration. definition and initialiation outside.
    static const int othervalue{1};    // static const can be initialized inside.
    static inline int anothervalue{1}; // static inline can be initialized inside. works with c++17 and above.
    static constexpr int someother{1}; // static constexpr can be initialized inside. works with c++17 and above.

    // auto and ctad

    static inline auto value{1}; // auto only works for static members

    static inline std::pair p{1, 2}; // ctad only works for static members
};

int Counter::count{0};

int main(int argc, char const *argv[])
{
    std::cout << Counter::count << "\n";
    Counter c{};
    std::cout << c.count << "\n";
    return 0;
}
