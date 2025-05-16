#include <stdio.h>

int main()
{
    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {
        printf("Index: %d\n", list[i]);

        if (list[i] == 5)
            break;
        else
            continue;

        printf("Não é executado!\n");
    }

    return 0;
}