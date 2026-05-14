#include <iostream>
#include <string>
#include <optional>

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

std::optional<Color> toColor(std::string_view input)
{
    if (input == "red")
        return red;
    if (input == "green")
        return green;
    if (input == "blue")
        return blue;

    return {};
}

std::ostream &operator<<(std::ostream &out, Color value)
{
    return out << getColorString(value);
}

std::istream &operator>>(std::istream &in, Color &value)
{
    std::string input;
    in >> input;

    std::optional<Color> result = toColor(input);
    if (result)
    {
        value = *result;
        return in;
    }

    in.setstate(std::ios_base::failbit);
    return in;
}

int main(int argc, char const *argv[])
{
    std::cout << red << "\n";

    Color value;
    std::cin >> value;
    if (std::cin)
    {
        std::cout << value << "\n";
    }
    else
    {
        std::cin.clear(); // reset input stream so that next cin works.
        std::cout << "invalid \n";
    }

    std::string in;
    std::cin >> in;
    std::cout << in << "\n";

    return 0;
}
