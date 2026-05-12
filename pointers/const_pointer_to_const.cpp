int main(int argc, char const *argv[])
{
    const int value{10};
    const int* const cptr{&value};

    int anothervalue{100};
    // cptr = &anothervalue;

    *cptr = anothervalue;
    return 0;
}
