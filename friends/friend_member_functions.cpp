#include <iostream>

class File;

class Saver
{
public:
    Saver() = default;

    void save(const File &file);
};

class File
{
    int m_data{};

public:
    File() = default;
    File(int data) : m_data{data} {}
    friend void Saver::save(const File &file);
};

void Saver::save(const File &file)
{
    std::cout << "Saving File with content: " << file.m_data << "\n";
}

int main(int argc, char const *argv[])
{
    File f{1};
    Saver{}.save(f);
    return 0;
}
