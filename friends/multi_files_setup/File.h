#ifndef FILE_H
#define FILE_H

#include "Saver.h"

class File
{
    int m_data{};

public:
    File() = default;
    File(int data) : m_data{data} {}
    friend void Saver::save(const File &file);
};

#endif