#include <iostream>

int main(int argc, char const *argv[])
{
    short x{1};
    std::cout << int{x} << "\n"; // direct-list-initialization
    std::cout << static_cast<int>(1.22) << "\n";
    std::cout << int(1.22) << "\n"; // C-style
    std::cout << (int)1.22 << "\n"; // C-style

    return 0;
}
