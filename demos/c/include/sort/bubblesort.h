#ifndef __SK_BUBBLE_SORT__
#define __SK_BUBBLE_SORT__

/*
    Sorts given array by bubblesort.

    Bubble Sort Explanation:
    1. Start at 0
    2. Compare current value to next value
        - If current value is larger than next value, swap
    3. Move down list by 1
    4. Repeat steps 2 and 3 until hit the list size - 1 (since you test next value)
    5. Repeat steps 1 to 4 again but up to the list size - number of loops - 1
    6. Once the list size - number of loops - 1 reaches 0, stop.
*/
void bubbleSort(void ** toSort, int len, int (*compareFunc)(void * obj1, void * obj2));

#endif
