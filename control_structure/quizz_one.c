#include <stdio.h>
#include <stdbool.h>

int main()
{

    const int idade = 17;
    float peso = 80.50;
    char *nome = "André";
    char sexo = 'M';

    printf("Nome: %s\n", nome);
    printf("Sexo: %c\n", sexo);
    printf("Idade: %d\n", idade);
    printf("Peso: %f\n", peso);

    bool maior_idade = idade >= 18 ? true : false;

    if (maior_idade)
    {
        printf("É maior de idade!\n");
    }
    else if (maior_idade < 18)
    {
        printf("É menor de idade!\n");
    }
    else
    {
        printf("Idoso!\n");
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
        printf("Outros");
        break;
    }

    return 0;
}