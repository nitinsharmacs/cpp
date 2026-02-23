#include <iostream>
#include <typeinfo>

int main(int argc, char const *argv[])
{

    std::cout << typeid(1.0).name() << std::endl;
    return 0;
}
