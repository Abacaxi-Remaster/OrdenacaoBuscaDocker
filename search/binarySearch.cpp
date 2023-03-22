#include "../sort.hpp"
int bSearch(int *array, int value, int start, int end)
{
    if (end >= start)
    {
        int mid = start + (end - start) / 2;
        if (array[mid] == value)
        {
            return mid;
        }

        if (array[mid] > value)
        {
            return bSearch(array, start, mid - 1, value);
        }
        return bSearch(array, mid + 1, end, value);
    }
    return -1;
}

double binarySearch(int *array, int value, int length)
{
    int arrayAuxiliar[length];
    for (int i = 0; i < length; i++)
    {
        arrayAuxiliar[i] = array[i];
    }
    qSort(arrayAuxiliar, 0, length - 1);
    auto start = steady_clock::now();
    bSearch(arrayAuxiliar, value, 0, length-1);
    auto end = steady_clock::now();
    duration<double, std::micro> time = end - start;
    double tempo = time.count();
    return tempo;
}
