#ifndef LIB_H
#define LIB_H

template <typename T, typename U>
auto max(T a, U b)
{
    return a < b ? b : a;
}

#endif