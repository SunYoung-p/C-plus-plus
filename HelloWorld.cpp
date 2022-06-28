#include <iostream>

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            std::cout << i + 1 << " x " << j + 1 << " = " << (i + 1) * (j + 1) << std::endl;
        }
        std::cout << std::endl;
    }
    return 0;
}