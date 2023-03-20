#include <iostream>
#include "functions.hpp"
#include "randomArray.hpp"

using namespace std;

int main()
{
    int *array;
    randomArray(&array, 5, 0, 10);
    return 0;
}