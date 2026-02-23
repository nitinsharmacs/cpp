#define DO_ADD

int main()
{
    int a{1}, b{3};

#ifdef DO_ADD
    int result{a + b};
#endif

    return 0;
}
