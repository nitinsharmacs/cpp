#include <string_view>
#include "../helpers/stdout.h"
#include <iostream>
#include <typeinfo>

int main(int argc, char const *argv[])
{

    using namespace std::string_view_literals;

    print(typeid("Hello world"sv).name());
    return 0;
}
