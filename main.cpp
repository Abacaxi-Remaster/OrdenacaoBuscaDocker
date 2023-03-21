#include <iostream>
#include "sort.hpp"
#include "search.hpp"
#include "randomArray.hpp"

using namespace std;

int main()
{
    int length = 5;
    int bottom = 0;
    int ceiling = 3;
    int *array;
    randomArray(&array, length, bottom, ceiling);
    mergeSort(array, length);
    cout << binarySearch(array,2,length);
    return 0;
}