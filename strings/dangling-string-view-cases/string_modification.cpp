#include <string>
#include <string_view>
#include "../../helpers/stdout.h"

int main(int argc, char const *argv[])
{

    std::string name{"John Doe"};

    std::string_view sv{name};

    print("Before modification.");
    print(sv);

    print("After modification.");
    name = "Williem Sen";
    print(sv.length());
    print(sv);
    // only prints "William " as string view views original memory length string.

    print("Trying a small length string. There should be garbage characters.");

    name = "John";
    print(sv);
    return 0;
}
