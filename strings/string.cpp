#include <iostream>
#include <string>
#include "../helpers/stdout.h"

int main(int argc, char const *argv[])
{
    constexpr std::string name{"Nitin"};

    print(name);
    return 0;
}