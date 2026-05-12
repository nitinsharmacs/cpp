int main(int argc, char const *argv[])
{
    const int value{10};
    const int* iptr{&value};

    *iptr = 100; // it will fail.
    iptr = nullptr; // it will compile.

    int nonConstValue{100};
    iptr = &nonConstValue;
    *iptr = 300; // it will still fail.
    return 0;
}
