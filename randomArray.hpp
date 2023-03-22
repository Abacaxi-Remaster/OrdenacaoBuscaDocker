#ifndef RANDOMARRAY_HPP
#define RANDOMARRAY_HPP
#include <ctime>
#include <random>

void randomArray(int **array, int length, int floor, int celling)
{
    random_device rd;   // non-deterministic generator
    mt19937 gen(rd());  // to seed mersenne twister.
    uniform_int_distribution<> dist(20,2000000); // distribute results between 20 and 2000000 inclusive
    *array = new int[length];
    srand(time(0));
    for (int i = 0; i < length; i++)
    {
        (*array)[i] = dist(gen);
    }
}
#endif