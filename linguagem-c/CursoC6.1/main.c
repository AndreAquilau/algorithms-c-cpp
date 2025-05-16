#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, int argv)
{
    int data[5] = {};

    for (int i = 0; i < 10; i++)
    {
        printf("Insira o dado [%d]: ", i);
        scanf("%d", &data[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        printf("Dado [%d] = %d\n", i, data[i]);
    }

    return 0;
}