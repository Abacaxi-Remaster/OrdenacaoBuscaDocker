void Merge(int *array, int left, int center, int right)
{
	int sizel = center - left + 1; // tamanho da primeira parte
	int sizer = right - center;	   // tamanho da segunda parte
	int L[sizel] = {};
	int R[sizer] = {};

	for (int i = 0; i < sizel; i++)
	{
		L[i] = array[left + i]; // preenche a metade esquerda
	}
	for (int j = 0; j < sizer; j++)
	{
		R[j] = array[center + j + 1]; // preenche a metade direita
	}
	int i = 0;
	int j = 0;
	int k = left;
	while (i < sizel && j < sizer)
	{ // Arruma do menor pro maior
		if (L[i] <= R[j])
		{
			array[k] = L[i];
			i++;
		}
		else
		{
			array[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < sizel)
	{ // restante
		array[k] = L[i];
		i++;
		k++;
	}

	while (j < sizer)
	{
		array[k] = R[j];
		j++;
		k++;
	}
}

void mSort(int *arr, int start, int end)
{
	if (start < end)
	{
		int center = (start + end) / 2;
		mSort(arr, start, center);
		mSort(arr, center + 1, end);
		Merge(arr, start, center, end);
	}
}

void mergeSort(int *arr, int length)
{
	mSort(arr, 0, length);
}
