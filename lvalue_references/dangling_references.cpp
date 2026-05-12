#include <iostream>

int &getDanglingRef()
{
    int x = 42; // Local variable on the stack
    int &ref{x};
    return ref; // ERROR: Returns reference to 'x', which is destroyed after this call
}

int main()
{
    int &ref = getDanglingRef();
    // 'ref' is now dangling. Accessing it is Undefined Behavior.
    std::cout << ref << std::endl; // Might print 42, garbage, or crash.
    return 0;
}