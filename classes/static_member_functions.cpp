#include <iostream>

class Counter
{
    static inline int s_count{0};

public:
    static int next()
    {
        return ++s_count;
    }

    static int prev();
};

int Counter::prev()
{
    return --s_count;
}

int main(int argc, char const *argv[])
{
    std::cout << Counter::next() << "\n";
    std::cout << Counter::next() << "\n";
    std::cout << Counter::prev() << "\n";
    std::cout << Counter::prev() << "\n";

    Counter{}.next();
    return 0;
}
