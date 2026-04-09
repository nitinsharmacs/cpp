#include <iostream>

void print(int a)
{
    std::cout << a << "\n";
}

void print(char a) = delete;
void print(bool a) = delete;

int main(int argc, char const *argv[])
{
    print(1);
    print('a');
    print(true);
    return 0;
}
