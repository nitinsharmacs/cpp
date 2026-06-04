#include <iostream>
#include <string>

class Emp
{
private:
    std::string m_name{};

public:
    Emp(std::string_view name)
        : m_name{name}
    {
    }

    void print()
    {
        std::cout << "Name: " << m_name << "\n";
    }
};

void printEmp(Emp emp)
{
    emp.print();
}

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

    void print()
    {
        std::cout << "Int(" << m_value << ")\n";
    }
};

void printInt(Int value)
{
    value.print();
}

class Float
{
private:
    Int m_value{};

public:
    Float() = default;
    Float(Int value)
        : m_value{value}
    {
    }

    void print()
    {
        std::cout << "Float(" << " " << ")\n";
    }
};

void printFloat(Float value)
{
    value.print();
}

int main(int argc, char const *argv[])
{

    printInt(2);
    // printFloat(1);
    // printEmp("Hemant");
    return 0;
}
