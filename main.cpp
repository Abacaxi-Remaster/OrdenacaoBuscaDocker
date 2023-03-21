#include <iostream>
#include "sort.hpp"
#include "randomArray.hpp"

using namespace std;

int main()
{
    int length = 4;
    int bottom = 0;
    int ceiling = 10;
    int *array;
    randomArray(&array, length, bottom, ceiling);
    mergeSort(array, length);
    return 0;
}