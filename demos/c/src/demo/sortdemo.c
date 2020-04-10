#include <stdio.h>
#include <stdlib.h>

#include "compare.h"
#include "bubblesort.h"

#include "sortdemo.h"

void printIntArray(int * array, int len)
{
    for (int i = 0; i < len; i++)
        printf("item[%d]: %d", i, array[i]);
}

int readIntFile(int ** array, int * len, char * fileName)
{
    FILE * filePtr = NULL;

    int * newArray = NULL;

    filePtr = fopen(fileName, "r");

    if (!filePtr)
        return -1;

    fclose(filePtr);

    return -1;
}

void sortIntDemo(char * sampleFile)
{
    int * array = NULL;
    int len = 0;

    if (readIntFile(&array, &len, sampleFile) != 0)
    {
        fprintf(stderr, "Unable to read file.\n");

        return;
    }

    printf("Before:\n");
    printIntArray(array, len);
    printf("\n");

    bubbleSort((void**)array, len, (*intCompare));

    printf("After:\n");
    printIntArray(array, len);
    printf("\n");

    return;
}
