#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    int nota = 8;

    if (nota == 8)
        printf("Passou!\n");

    if (nota > 6)
        printf("Passou!\n");

    if (nota < 6)
        printf("Reprovado!\n");

    if (nota >= 6)
        printf("Passou!\n");

    if (nota <= 6)
        printf("Reprovado!\n");

    if (nota != 6 && nota > 6)
        printf("Passou!\n");

    if (!(nota != 8))
        printf("Passou!\n");

    for (int i = 0; i <= 100; ++i)
    {
        if ((i % 2) == 0)
            printf("%d é Par\n", i);
        else
            printf("%d é Impar\n", i);
    }

    int m = 0;

    m = max(1, 2);

    printf("%d\n", m);

    return 0;
}