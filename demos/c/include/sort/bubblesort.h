#ifndef __SK_BUBBLE_SORT__
#define __SK_BUBBLE_SORT__

/*
    Sorts given array by bubblesort.
*/
void bubbleSort(void ** toSort, int len, int (*compareFunc)(void * obj1, void * obj2));

#endif
