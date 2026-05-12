#include <iostream>

void changePointerAddress(int *&pref)
{
    int willbedestroyed{404};
    pref = &willbedestroyed;
}

int main(int argc, char const *argv[])
{
    int value{100};
    int anothervalue{200};
    int *iptr{&value};

    int *&pref{iptr};

    std::cout << value << "\n";
    std::cout << *iptr << "\n";
    std::cout << pref << "\n";
    std::cout << *pref << "\n";

    std::cout << "<---- Changing address of pointer ---->\n";
    pref = &anothervalue;
    std::cout << anothervalue << "\n";
    std::cout << *iptr << "\n";
    std::cout << pref << "\n";
    std::cout << *pref << "\n";

    std::cout << "<---- Changing address in pointer using function ---->\n";
    changePointerAddress(pref);
    std::cout << *iptr << "\n"; // may print 404
    std::cout << pref << "\n";
    std::cout << *pref << "\n";

    return 0;
}
