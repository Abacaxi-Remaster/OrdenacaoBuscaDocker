#include "swap.hpp" 
int Partition(int arr[], int l, int r)
{
	int pivot = arr[r];
	int i = l;
	for (int j = l; j < r; j++)
	{
		if (arr[j] <= pivot)
		{
			if (i != j)
			{
				swap(arr[i],arr[j]);
			}
			i++;
		}
	}
	swap(arr[i],arr[r]);
	return i;
}
void qSort(int arr[], int l, int r)
{
	if (l < r)
	{
		int p = Partition(arr, l, r);
		qSort(arr, l, p-1);
		qSort(arr, p + 1, r);
	}
}
double quickSort(int *array, int length)
{
    int arrayAuxiliar[length];
    for (int i = 0; i < length; i++)
        arrayAuxiliar[i] = array[i];

    auto start = steady_clock::now();

	qSort(arrayAuxiliar, 0, length);


    auto end = steady_clock::now();
    duration<double, std::micro> time = end - start;
    double tempo = time.count();
    return tempo;
}
