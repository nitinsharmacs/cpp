#include <string>
#include <string_view>
#include "../../helpers/stdout.h"

std::string name()
{
    std::string fullname{"David Sen"};

    return fullname;
}

int main(int argc, char const *argv[])
{
    std::string_view sv{name()};

    print(sv);
    return 0;
}
