#include <stdio.h>
#include <stdbool.h>

int main()
{
    int idade;
    char *nome;
    float peso;
    char sexo;

    printf("Digite seu nome: ");
    scanf("%s", &*nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Sexo M ou F: ");
    scanf("%s", &sexo);

    sexo == 'M' ? printf("Masculino\n") : printf("Feminino\n");

    if (peso > 15 && peso <= 60)
    {
        printf("Peso inrregular!\n");
    }
    else if (peso > 60 && peso <= 100)
    {
        printf("Peso normal\n");
    }
    else
    {
        printf("Está acima do peso\n");
    }

    switch (sexo)
    {
    case 'M':
        printf("Masculino\n");
        break;
    case 'F':
        printf("Feminino\n");
        break;
    default:
        printf("Outros\n");
        break;
    }

    return 0;
}