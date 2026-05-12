#include <iostream>
#include <typeinfo>

int main(int argc, char const *argv[])
{
    int value{100};
    std::cout << &value << "\n";

    // address-of operator returns a pointer object
    // whose value is the address of the operand.
    // address-of operator does not return address as
    // c++ does not support address as literal value.
    // printing a pointer object prints the value it holds
    // which is the address of the operand.

    std::cout << typeid(value).name() << "\n";
    std::cout << typeid(&value).name() << "\n";
    return 0;
}
