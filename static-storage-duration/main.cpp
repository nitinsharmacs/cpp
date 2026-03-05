#include "../helpers/stdout.h"

static int value{1};

int callingMeCounts(void)
{
    static int calls{0};
    return ++calls;
}

int main(int argc, char const *argv[])
{
    print(value);
    print(callingMeCounts());
    print(callingMeCounts());
    print(callingMeCounts());
    print(callingMeCounts());
    return 0;
}
