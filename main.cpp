#include <iostream>
#include "sort.hpp"
#include "search.hpp"
#include "randomArray.hpp"

using namespace std;

int main()
{
    int length = 7;
    int bottom = 0;
    int ceiling = 3;
    int *array;
    randomArray(&array, length, bottom, ceiling);
    array[7] = 3;
    mergeSort(array, length);
    cout << ternarySearch(array, 3, length);
    return 0;
}