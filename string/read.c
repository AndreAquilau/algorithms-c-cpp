#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomeCompleto[200];

    printf("Digite seu nome completo: ");

    scanf("%20[^\n]", nomeCompleto);

    printf("\n");

    printf("Seu nome é %s\n", nomeCompleto);

    return 0;
}