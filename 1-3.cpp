#include <iostream>

int BoxVolume(int, int, int);
int BoxVolume(int, int);
int BoxVolume(int);
int BoxVolume();

int main()
{
    std::cout << "[3,3,3] : " << BoxVolume(3, 3, 3) << std::endl;
    std::cout << "[5,5,D] : " << BoxVolume(5, 5) << std::endl;
    std::cout << "[7,D,D] : " << BoxVolume(7) << std::endl;
    std::cout << "[D,D,D] : " << BoxVolume() << std::endl;

    return 0;
}

int BoxVolume(int n, int m, int o)
{
    return n * m * o;
}

int BoxVolume(int n, int m)
{
    return n * m;
}

int BoxVolume(int n)
{
    return n;
}

int BoxVolume()
{
    return -1;
}