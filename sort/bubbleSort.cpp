#include "swap.hpp" 
#include <chrono>

using namespace std::chrono;

double bubbleSort(int *array, int length)
{
    int arrayAuxiliar[length];
    for (int i = 0; i < length; i++)
        arrayAuxiliar[i] = array[i];
    auto start = steady_clock::now();

    bool s;
    do
    {
        s = false;
        for (int i = 0; i < length - 1; i++)
        {
            if (arrayAuxiliar[i] > arrayAuxiliar[i + 1])
            {
                swap(arrayAuxiliar[i], arrayAuxiliar[i + 1]);
                s = true;
            }
        }
    } while (s);

    auto end = steady_clock::now();
    duration<double, std::micro> time = end - start;
    double tempo = time.count();
    return tempo;
}