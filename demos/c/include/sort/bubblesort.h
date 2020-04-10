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

    Time Complexity:
        Worst Case: O(n^2) compare, O(n^2) swaps
            - Only occurs when array is completely reversed order
        Best Case: O(n) compare, O(1) swaps
            - (will be O(n^2) if swap check isn't implemented)
            - Only occurs when array is already sorted
        Average Case: O(n^2) compare, O(n^2) swaps

    Space Complexity: O(n)
    Auxiliary Space: O(1)
*/
void bubbleSort(void ** toSort, int len, int (*compareFunc)(void * obj1, void * obj2));

#endif
