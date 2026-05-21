#include <iostream>

struct Pixel
{
    int x;
    int y;
};

void printPixel(const Pixel &pixel)
{
    std::cout << pixel.x << "\n";
    std::cout << pixel.y << "\n";
}

Pixel createPixel(int x, int y)
{
    return Pixel{x, y};
}

int main(int argc, char const *argv[])
{
    Pixel pixel{3, 2};

    printPixel(pixel);
    printPixel(Pixel{1, 2});
    printPixel({4, 5}); // should be avoided.

    Pixel result{createPixel(1, 2)};
    printPixel(createPixel(1, 2));
    return 0;
}
