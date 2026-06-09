#include <iostream>
#include "Saver.h"
#include "File.h"

void Saver::save(const File &file)
{
    std::cout << "Saving File with content: " << file.m_data << "\n";
}
