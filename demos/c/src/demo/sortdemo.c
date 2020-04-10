#include "compare.h"
#include "bubblesort.h"

#include "sortdemo.h"

#define OBJECT_LENGTH 10

void sortDemo()
{
    int intArray[OBJECT_LENGTH];

    bubbleSort((void**)intArray, OBJECT_LENGTH, (*intCompare));

    return;
}
