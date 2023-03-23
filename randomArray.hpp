#ifndef RANDOMARRAY_HPP
#define RANDOMARRAY_HPP
#include <ctime>
#include <random>

#include <initializer_list>

void randomArray(int **array, int length, int floor, int celling)
{
    std::default_random_engine gen;
    std::uniform_int_distribution<int> dist(20,2000000); // distribute results between 20 and 2000000 inclusive
    *array = new int[length];
    for (int i = 0; i < length; i++)
    {
        (*array)[i] = dist(gen);
    }
}
#endif