#include <iostream>

void print_usages()
{
    std::cout << "Usages: \n";
    std::cout << "copy <source> <destination> \n";
}

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        print_usages();
        return 1;
    }

    int source_fd;
    source_fd = open(argv[0])

        return 0;
}
