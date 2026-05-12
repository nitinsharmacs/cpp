#include <iostream>

int main(int argc, char const *argv[])
{
    int value{100};

    std::cout << *&value << "\n";
    return 0;
}
