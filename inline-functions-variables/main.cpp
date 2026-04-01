#include "../helpers/stdout.h"
#include "lib.h"

inline int value{1};

int main(int argc, char const *argv[])
{

    print(add(2, 3));
    print(value);
    return 0;
}
