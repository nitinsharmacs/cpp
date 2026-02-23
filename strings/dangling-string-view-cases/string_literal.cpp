#include <string>
#include <string_view>
#include "../../helpers/stdout.h"

int main(int argc, char const *argv[])
{
    using namespace std::string_literals;

    std::string_view sv{"Hello world"s};

    print(sv);
    return 0;
}
