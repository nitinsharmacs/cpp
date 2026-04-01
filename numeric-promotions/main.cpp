#include "../helpers/stdout.h"

int main(int argc, char const *argv[])
{
    char value{'a'};
    int repr{value}; // promotion from 'char' to 'int'

    print(value);
    print(repr);
    return 0;
}
