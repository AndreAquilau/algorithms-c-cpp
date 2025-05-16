#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int idade = 0;
    float peso = 0.00;

    printf("Valor inicial da idade: %d. \n", idade);

    printf("Digite uma idade: ");
    scanf("%d", &idade);

    printf("Digite uma peso: ");
    scanf("%f", &peso);

    printf("Idade informada: %d.\n", idade);
    printf("Peso informado: %f.\n", peso);

    return 0;
}