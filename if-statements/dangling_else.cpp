#include "../helpers/stdout.h"

int main(int argc, char const *argv[])
{
    // if (true)
    //     if (false)
    //         print("Inner if");
    // else
    //     print("where do I belong");
    {
        print("statement 1");
        print("statement 2");
    }
    return 0;
}
