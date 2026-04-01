#include <iostream>
#include "../helpers/stdout.h"

int main(int argc, char const *argv[])
{
    // covnersion int -> usigned int -> int. value is changed from source
    // but no data loss.
    std::cout << static_cast<int>(static_cast<unsigned int>(-5)) << "\n";
    return 0;
}
