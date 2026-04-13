#include <iostream>
#include <bitset>

int main(int argc, char const *argv[])
{
    std::bitset<8> bits{0b00000001};
    std::cout << bits << "\n";
    return 0;
}
