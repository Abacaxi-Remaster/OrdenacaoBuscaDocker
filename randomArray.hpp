#ifndef RANDOMARRAY_HPP
#define RANDOMARRAY_HPP
#include <ctime>
#include <random>

#include <initializer_list>

void randomArray(int **array, int length, int floor, int celling)
{
    std::random_device rd;   // non-deterministic generator
    std::mt19937 gen(rd());  // to seed mersenne twister.
    std::uniform_int_distribution<int> dist(20,2000000); // distribute results between 20 and 2000000 inclusive
    *array = new int[length];
    srand(time(0));
    for (int i = 0; i < length; i++)
    {
        (*array)[i] = dist(gen);
    }
}
#endif