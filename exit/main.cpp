#include <cstdlib>
#include "../helpers/stdout.h"

void cleanup()
{
    print("Closing opened files.");
    print("Cleaning up other things");
}

void closeConnection()
{
    print("Closing db connection");
}

int main(int argc, char const *argv[])
{

    std::atexit(closeConnection);
    std::atexit(cleanup);
    print("Starting");

    std::exit(1);
    print("Finished");
    return 0;
}
