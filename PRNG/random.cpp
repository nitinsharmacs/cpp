#include "../helpers/stdout.h"

static unsigned short g_state{0};

void seed(unsigned short seed)
{
    g_state = seed;
}

unsigned short random()
{
    g_state = 8253729 * g_state + 2396403;
    return g_state % 32768;
}

void printRandomNumbers()
{
    for (int a{1}; a <= 20; a++)
    {
        print(random(), '\t');
    }
    print("");
}

int main(int argc, char const *argv[])
{

    printRandomNumbers();
    print("-------------- Using another seed -------------");
    seed(11001);
    printRandomNumbers();

    return 0;
}
