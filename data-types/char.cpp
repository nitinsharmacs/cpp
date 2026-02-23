#include <iostream>

int main(int argc, char const *argv[])
{
    char value{'c'};
    std::cout << value << std::endl;

    std::cout << "Type a character: ";
    std::cin.get(value); // takes whitespaces/new lines as well.

    std::cout << "Character you typed is: '" << value << "'";
    std::cin >> value;
    std::cout << "Character you typed is: '" << value << "'";

    return 0;
}
