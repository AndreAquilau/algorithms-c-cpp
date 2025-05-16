#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "locale.h"

#define SIZE_PLANO_CONTAS 1001

int main()
{
    char **planoContas = malloc(sizeof(char) * SIZE_PLANO_CONTAS);
    char value[SIZE_PLANO_CONTAS];

    for (int i = 0; i < (SIZE_PLANO_CONTAS); i++)
    {
        sprintf(value, "%d", rand());

        planoContas[i] = value;
    }

    for (int i = 0; i < SIZE_PLANO_CONTAS; i++)
    {
        printf("%x", (*planoContas[i]));
    }

    free(planoContas);

    return 0;
}