#include <string_view>
#include "../helpers/stdout.h"

int main(int argc, char const *argv[])
{
    std::string_view sv{"Williams"};
    print(sv);

    print("Removing 2 characters from left.");
    sv.remove_prefix(2);
    print(sv);

    print("Removing 2 characters from right.");
    sv.remove_suffix(2);
    print(sv);

    print("Restoring string view.");
    sv = "Williams";
    print(sv);
    return 0;
}
