#include <iostream>

int main(int argc, char const *argv[])
{
    int* iptr{};
    char* cptr{};
    double* dptr{};

    std::cout << "int pointer size " << sizeof(iptr) << "\n";
    std::cout << "char pointer size " << sizeof(cptr) << "\n";
    std::cout << "double pointer size " << sizeof(dptr) << "\n";
    return 0;
}
