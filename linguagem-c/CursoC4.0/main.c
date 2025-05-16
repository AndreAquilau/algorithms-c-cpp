#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    float input;

    printf("Insira a nota: ");
    scanf("%f", &input);

    if (input >= 7.0)
    {
        printf("Aprovado!\n");
    }
    else
    {
        printf("Reprovado!\n");
    }

    return 0;
}