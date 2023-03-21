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

int binarySearch(int *array, int value, int length)
{
    return bSearch(array, value, 0, length);
}
