#include <iostream>
#include <string>

enum Color
{
    red,
    green,
    blue,
};

std::string_view getColorString(Color value)
{
    switch (value)
    {
    case 0:
        return "red";
    case 1:
        return "green";
    case 2:
        return "blue";
    default:
        return "???";
    }
}

std::ostream &operator<<(std::ostream &out, Color value)
{
    return out << getColorString(value);
}

int main(int argc, char const *argv[])
{
    std::cout << red << "\n";
    // std::cout << green << "\n";
    // std::cout << blue << "\n";
    return 0;
}
