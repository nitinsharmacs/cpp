#include <string>
#include <string_view>
#include "../../helpers/stdout.h"

int main(int argc, char const *argv[])
{
    std::string_view sv{};

    {
        std::string s{"World"};
        sv = s;

        print("Inside the block.");
        print(sv);
    }

    print("Outside the block.");
    print(sv);
    return 0;
}
