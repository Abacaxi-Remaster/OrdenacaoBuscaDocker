#include "../sort.hpp"
int tSearch(int *array, int value, int start, int end)
{
    if (end > start)
    {
        int mid1 = start + (end - start) / 3;
        int mid2 = end - (end - start) / 3;
        if (array[mid1] == value)
        {
            return mid1;
        }
        if (array[mid2] == value)
        {
            return mid2;
        }

        if (array[mid1] > value)
        {
            return tSearch(array, value, start, mid1 - 1);
        }
        else if (array[mid2] > value)
        {
            return tSearch(array, value, mid1, mid2 - 1);
        }
        return tSearch(array, value, mid2, end);
    }
    return -1;
}

double ternarySearch(int *array, int value, int length)
{
    int arrayAuxiliar[length];
    for (int i = 0; i < length; i++)
    {
        arrayAuxiliar[i] = array[i];
    }
    qSort(arrayAuxiliar, 0, length - 1);
    auto start = steady_clock::now();
	tSearch(arrayAuxiliar, value, 0, length-1);
	auto end = steady_clock::now();
    duration<double, std::micro> time = end - start;
    double tempo = time.count();
    return tempo;
}