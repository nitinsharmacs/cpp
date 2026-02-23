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
    name = "William Sen";
    print(sv.length());
    print(sv);
    // only prints "William " as string view views original memory length string.
    return 0;
}
