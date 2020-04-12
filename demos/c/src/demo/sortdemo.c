#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "compare.h"
#include "bubblesort.h"
#include "selection.h"
#include "sortdemo.h"

/*
    Prints an int array
*/
void printIntArray(int * array, int len)
{
    for (int i = 0; i < len; i++)
        printf("item[%d]: %d\n", i, array[i]);
}

/*
    Reads file and places found int array and length of array into given variables

    Returns 0 on success.
    Returns -1 if error found (file or memory).
*/
int readIntFile(int ** array, int * len, char * fileName)
{
    FILE * filePtr = NULL;
    char currChar = 0;
    char * fileContent = NULL;
    int fileLen = 0;

    char delim[3] = " ,";
    char * token = NULL;

    int * newArray = NULL;
    int newLen = 0;

    // Get file contents
    filePtr = fopen(fileName, "r");

    if (!filePtr)
        return -1;

    currChar = getc(filePtr);
    while (currChar != EOF)
    {
        fileLen++;
        fileContent = realloc(fileContent, sizeof(char) * (fileLen + 1));
        fileContent[fileLen - 1] = currChar;
        fileContent[fileLen] = '\0';

        currChar = getc(filePtr);
    }

    fclose(filePtr);

    // Copy integer from file content to array
    token = strtok(fileContent, delim);
    while (token != NULL)
    {
        newLen++;
        newArray = realloc(newArray, sizeof(int) * newLen);

        if (!newArray)
        {
            free(fileContent);
            return -1;
        }

        newArray[newLen - 1] = atoi(token);

        token = strtok(NULL, delim);
    }

    *array = newArray;
    *len = newLen;

    free(fileContent);

    return 0;
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

    printf("Bubble Sort:\n");

    printf("Before:\n");
    printIntArray(array, len);
    printf("\n");

    bubbleSort((void**)&array, len, (*intCompare));

    printf("After:\n");
    printIntArray(array, len);
    printf("\n");

    free(array);

    if (readIntFile(&array, &len, sampleFile) != 0)
    {
        fprintf(stderr, "Unable to read file.\n");

        return;
    }

    printf("Selection Sort:\n");

    printf("Before:\n");
    printIntArray(array, len);
    printf("\n");

    selectionSort(array, len);

    printf("After:\n");
    printIntArray(array, len);
    printf("\n");

    free(array);

    return;
}
