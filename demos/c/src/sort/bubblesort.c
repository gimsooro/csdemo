#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "bubblesort.h"

void bubbleSort(void ** toSort, int len, int (*compareFunc)(void * obj1, void * obj2))
{
    int storedVal = 0;

    int * array = (int*)(*toSort);

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if ((*compareFunc)((void *)&(array[j]), (void *)&(array[j + 1])) > 0)
            {
                // printf("%d: swap %d[%d] with %d[%d]\n", i, array[j], j, array[j + 1], j + 1);

                // swap
                storedVal = array[j];
                array[j] = array[j + 1];
                array[j + 1] = storedVal;
            }
        }
    }

    *toSort = (void*)array;

    return;
}
