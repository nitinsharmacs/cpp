#include <iostream>

class Int
{
private:
    int m_value{};

public:
    Int() = default;
    Int(int value)
        : m_value{value}
    {
    }

    // void print() const
    // {
    //     std::cout << "Int(" << this->m_value << ")\n";
    // }
    static void print(const Int *const that)
    {
        std::cout << "Int(" << that->m_value << ")\n";
    }

    void reset()
    {
        *this = {};
    }
};

int main(int argc, char const *argv[])
{
    const Int i{1};
    // i.print();
    Int::print(&i);
    // i.reset();
    // i.print();
    return 0;
}
