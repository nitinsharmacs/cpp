#include <iostream>

int main(int argc, char const *argv[])
{
    // conversion int -> double -> int: no loss of data.
    std::cout << static_cast<int>(static_cast<double>(3)) << "\n";

    return 0;
}
