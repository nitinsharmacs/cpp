#ifndef SAVER_H
#define SAVER_H

class File;

class Saver
{
public:
    Saver() = default;

    void save(const File &file);
};

#endif