#include <stdio.h>

int main()
{
    int A = 10, B = 50, soma = 0, subtr = 0, mult = 0, divis = 0;

    // printf("Digite o primeiro valor: \n");
    // scanf("%d", &A);

    // printf("Digite o segundo valor: \n");
    // scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divis = A / B;

    printf("Resultado: \n");
    printf("Soma: %d. \n", soma);
    printf("Subtração: %d\n", subtr);
    printf("Multiplicação: %d\n", mult);
    printf("Divisão: %d\n", divis);

    printf("\n");

    printf("Incredento Pré: ++ %d\n", ++A);
    printf("Incredento Pos: ++ %d\n", A++);

    return 0;
}