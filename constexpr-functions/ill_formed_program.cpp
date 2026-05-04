int getMax(int a, int b)
{
    return a < b ? b : a;
}

constexpr int max(int a, int b)
{
    if (a < 0) // require for C++23 prior standards.
        return 0;
    return getMax(a, b);
}

int main(int argc, char const *argv[])
{
    int value{max(1, 2)};
    constexpr int value2{max(1, 2)}; // compilation error
    return 0;
}
