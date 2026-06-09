#include "File.h"
#include "Saver.h"

int main(int argc, char const *argv[])
{
    File f{1};
    Saver{}.save(f);
    return 0;
}
