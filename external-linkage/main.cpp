#include "../helpers/stdout.h"

extern int value;
extern double pi;

int add(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    print(value);
    print(pi);
    print(add(1, 3));
    return 0;
}
