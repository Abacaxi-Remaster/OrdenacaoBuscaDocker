void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int *array, int length)
{
    bool s;
    int temp = 0;
    do
    {
        s = false;
        for (int i = 0; i < length; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap(array[i], array[i + 1]);
                s = true;
            }
        }
    } while (s);
}
