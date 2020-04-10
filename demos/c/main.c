#include <stdio.h>

#include "sortdemo.h"

int main (int argc, char * argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "usage: %s <file>\n", argv[0]);
        return 0;
    }

    sortIntDemo(argv[1]);

    return 0;
}
