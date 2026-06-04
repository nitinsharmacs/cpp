#include <iostream>
#include <string>

class Int
{
private:
    int m_value{};

public:
    Int() = default;
    explicit Int(int value)
        : m_value{value}
    {
    }

    void print()
    {
        std::cout << "Int(" << m_value << ")\n";
    }
};

void printInt(Int value)
{
    value.print();
}

Int getInt()
{
    return {};
}

void printString(std::string_view s)
{
    std::cout << s << "\n";
}

int main(int argc, char const *argv[])
{
    // Int i = 1;
    // printInt({1});
    // Int i = {1};
    // getInt();

    using namespace std::string_literals;
    // std::string s{"hello world"sv};

    // std::cout << s << "\n";
    // s[0] = 'H';
    // std::cout << s << "\n";
    printString("hello world"s);
    // printString(std::string{"hello world"});
    return 0;
}