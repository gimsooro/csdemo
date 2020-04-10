#ifndef __SK_COMPARE__
#define __SK_COMPARE__

/*
    Compares two ints.

    If obj1 == obj2, returns 0
    If obj1 < obj2, returns negative
    If obj1 > obj2, returns positive

    Note: Comparison can be done with obj1 - obj2.
*/
int intCompare(void * obj1, void * obj2);

/*
    Compares two strings lexicographically.

    If obj1 == obj2, returns 0
    If obj1 < obj2, returns negative
    If obj1 > obj2, returns positive
*/
int lexicographicCompare(void * obj1, void * obj2);

#endif
