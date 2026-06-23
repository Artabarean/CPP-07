#include <iostream>
#include <cmath>
#include <Array.hpp>

int main(int, char**)
{
    Array<int> integers(25);
    int* twin = new int[25];
    srand(time(NULL));
    for (int i = 0; i < 25; i++)
    {
        const int val = rand();
        integers[i] = val;
        twin[i] = val;
    }
    try
    {
        integers[-1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        integers[25] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (int i = 0; i < 25; i++)
    {
        integers[i] = rand();
        std::cout << integers[i] << std::endl;
    }
    delete [] twin;
    return 0;
}