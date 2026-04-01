#include "../helpers/stdout.h"

int main(int argc, char const *argv[])
{
    int value{1};

    switch (value)
    {
    case 1:
        print("Case 1");
        break;
    case 2:
        print("Case 2");
        break;
    default:
        print("default case");
    }
    return 0;
}
