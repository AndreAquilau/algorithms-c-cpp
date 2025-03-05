#include <stdio.h>
#include <stdbool.h>

int main()
{
    int idade = 24;
    const char *nome = "Andre";
    float peso = 25.50;
    char sexo = 'M';

    printf("Idade: %d\n", idade);
    printf("Nome: %s\n", nome);
    printf("Peso: %f\n", peso);

    // 1 - Condicional Ternário
    bool adulto = idade >= 20 ? true : false;

    printf("Adulto: %d\n", adulto);

    // 2 - Condicional IF - ELSE IF - ELSE

    if (peso > 0 && peso <= 300 || peso > 300 || (peso != 100))
    {
        printf("Seu peso está regular!\n");
    }
    else if (peso == 0)
    {
        printf("Peso inválido!\n");
    }
    else
    {
        printf("Erro!\n");
    }

    // 3 - Condicional SWITCH - CASE - DEFAULT

    switch (sexo)
    {
    case 'F':
        printf("Feminino\n");
        break;
    case 'M':
        printf("Masculino\n");
        break;
    default:
        printf("Outros\n");
        break;
    }

    return 0;
}