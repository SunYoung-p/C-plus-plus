#include <iostream>

template <typename T>

inline T squre(T x)
{
    return x * x;
}

int main()
{
    std::cout << squre(5.15) << std::endl;
    std::cout << squre(5) << std::endl;
}