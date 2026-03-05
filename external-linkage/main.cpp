#include "../helpers/stdout.h"

extern int value;
extern double pi;

int main(int argc, char const *argv[])
{
    print(value);
    print(pi);
    return 0;
}
