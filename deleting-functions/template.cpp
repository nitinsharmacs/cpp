#include <iostream>

void print(int a)
{
    std::cout << a << "\n";
}

template <typename T>
void print(T x) = delete;

int main(int argc, char const *argv[])
{

    print(1);
    print('a');
    print(true);
    print(5L);
    print(5u);
    // we can call more functions with other types.
    return 0;
}
