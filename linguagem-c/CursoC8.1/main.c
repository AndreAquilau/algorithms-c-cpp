#include <stdio.h>
#include <stdlib.h>

struct Pessoa
{
    char nome[50];
    int idade;
};

typedef struct Pessoa Pessoa;

int main(int argc, int argv)
{
    Pessoa pessoa = {"André", 25};

    printf("Digite seu nome: ");
    scanf("%50[^\n]s", pessoa.nome);
    fflush(stdin);

    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);
    fflush(stdin);

    printf("Olá %s\n", pessoa.nome);
    printf("Sua idade é %d", pessoa.idade);

    return 0;
}
