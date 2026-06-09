#include <iostream>

class File
{
    std::string m_filename{};

public:
    File(std::string_view filename)
        : m_filename{filename}
    {
        // openfile
        std::cout << "Opening file: " << m_filename << "\n";
    }

    void read()
    {
        std::cout << "Reading file: " << m_filename << "\n";
    }
    ~File()
    {
        std::cout << "Closing file: " << m_filename << "\n";
    }
};

int main(int argc, char const *argv[])
{
    File f{"./text.file"};
    f.read();
    return 0;
}
