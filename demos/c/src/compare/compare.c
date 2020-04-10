#include <stdlib.h>

#include "compare.h"

int intCompare(void * obj1, void * obj2)
{
    int * val1 = NULL;
    int * val2 = NULL;
    int compareVal = 0;

    val1 = (int*)(obj1);
    val2 = (int*)(obj2);

    compareVal = *val1 - *val2;

    return compareVal;
}

int lexicographicCompare(void * obj1, void * obj2)
{
    return 0;
}
