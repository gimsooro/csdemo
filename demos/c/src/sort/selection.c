#include "selection.h"

void swap(int * a, int * b)
{
    int temp = 0;

    temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int * array, int len)
{
    int unsortedIndex = 0;

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (array[j] < array[unsortedIndex])
                unsortedIndex = j;
        }

        swap(&(array[i]), &(array[unsortedIndex]));
    }

    return;
}
