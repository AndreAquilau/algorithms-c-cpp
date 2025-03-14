#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int list[] = {1, 2, 3};
    int *list2[] = {0, 0, 0};

    for (int i = 0; i < 3; i++)
    {
        list2[i] = &list[i];
    }

    *list2[0] = 999;

    for (int i = 0; i < 3; i++)
    {
        printf("%p - %p \n", list2[i], &list[i]);
    }

    return 0;
}