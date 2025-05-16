#include <stdio.h>

int main()
{
    float media = 0.00;

    printf("Insira a nota: ");
    scanf("%f", &media);

    if (media >= 7.00)
        printf("Aprovado(a)!\n");
    else if (media >= 4 && media < 7)
        printf("Autorizado a fazer o exame!\n");
    else
        printf("Reprovado(a)!\n");

    return 0;
}