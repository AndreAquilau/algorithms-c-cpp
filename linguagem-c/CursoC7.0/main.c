#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
    char names[3][256] = {{'A', 'n', 'd', 'r', 'e'}, "Natália", "Aline"};

    for (int i = 0; i < 3; i++)
    {
        printf("Nomes: %s\n", names[i]);
    }

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        printf("[");
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ", matriz[i][j]);
            sleep(1);
        }
        printf("]\n");
    }

    return 0;
}