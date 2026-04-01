#include <iostream>

int main(int argc, char const *argv[])
{

    // conversion double -> int -> double: loss of data. 0.12 data loss.
    std::cout << static_cast<double>(static_cast<int>(3.12)) << "\n";
    return 0;
}
