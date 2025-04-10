#include <stdlib.h>
#include <stdio.h>

int main(char args[])
{
    int integer[] = {1, 2, 3, 4, 5};

    int *pointer[] = {&integer[0],
                      &integer[1],
                      &integer[2],
                      &integer[3],
                      &integer[4]};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *pointer[i]);
    }

    return 0;
}