#include "../helpers/stdout.h"

int main(int argc, char const *argv[])
{
    int value{2};

    switch (value)
    {
        int b{1};
    case 1:
        int a;
        a = 1;
        print("Case 1");
        break;
    case 2:
        print(a);
        print(b);
        print("Case 2");
        break;
    default:
        print("default case");
    }
    return 0;
}
