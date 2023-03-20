void Merge(int *A, int l, int c, int r)
{
	int sizel = c - l + 1; // tamanho da primeira parte
	int sizer = r - c;	   // tamanho da segunda parte
	int L[sizel] = {};
	int R[sizer] = {};

	for (int i = 0; i < sizel; i++)
	{
		L[i] = A[l + i]; // preenche a metade esquerda
	}
	for (int j = 0; j < sizer; j++)
	{
		R[j] = A[c + j + 1]; // preenche a metade direita
	}
	int i = 0;
	int j = 0;
	int k = l;
	while (i < sizel && j < sizer)
	{ // Arruma do menor pro maior
		if (L[i] <= R[j])
		{
			A[k] = L[i];
			i++;
		}
		else
		{
			A[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < sizel)
	{ // restante
		A[k] = L[i];
		i++;
		k++;
	}

	while (j < sizer)
	{
		A[k] = R[j];
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
