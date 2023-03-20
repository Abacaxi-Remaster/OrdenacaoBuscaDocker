#include "functions.hpp"
#include <ctime>
#include <cstdlib>

void randomArray(int **array, int length, int floor, int celling)
{
    *array = new int[length];
    srand(time(0));
    for (int i = 0; i < length; i++)
    {
        (*array)[i] = rand() % (celling-floor) + floor;
    }
}