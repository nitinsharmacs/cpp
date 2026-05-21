#include <iostream>

struct Pixel
{
    int x;
    int y;
};

int main(int argc, char const *argv[])
{
    Pixel pixel{1, 2};
    Pixel *ptr{&pixel};

    std::cout << "----- Accessing data members using dereferencing -------\n";
    std::cout << (*ptr).x << "\n";
    std::cout << (*ptr).y << "\n";
    std::cout << "----------------------------\n";

    std::cout << "----- Accessing data members using arrow operator -------\n";
    std::cout << ptr->x << "\n";
    std::cout << ptr->y << "\n";
    std::cout << "----------------------------\n";
    return 0;
}
