#include "../helpers/stdout.h"
#include "math.h"

int add(int a, int b)
{
    return a + b + 10;
}

namespace Constants
{
    constexpr double pi{3.14};
}

namespace Constants
{
    constexpr double light{3e8};
}

int main(int argc, char const *argv[])
{

    print(Constants::light);
    print(Constants::light);
    print(Math::add(1, 2));
    print(Math::increment(1));
    print(add(1, 2));
    print(::add(1, 2));
    return 0;
}
