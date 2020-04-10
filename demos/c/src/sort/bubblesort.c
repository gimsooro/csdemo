#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "bubblesort.h"

void bubbleSort(void ** toSort, int len, int (*compareFunc)(void * obj1, void * obj2))
{
    int * array = (int*)(*toSort);
    int storedVal = 0;

    bool swapped = false;

    for (int i = 0; i < len - 1; i++)
    {
        swapped = false;

        for (int j = 0; j < len - i - 1; j++)
        {
            if ((*compareFunc)((void *)&(array[j]), (void *)&(array[j + 1])) > 0)
            {
                // swap
                storedVal = array[j];
                array[j] = array[j + 1];
                array[j + 1] = storedVal;

                swapped = true;
            }
        }

        // if there was no swap, then already completely sorted!
        if (!swapped)
            break;
    }

    *toSort = (void*)array;

    return;
}
