#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAX_PEAPLE 10
struct Pessoa
{
    char nome[50];
    int idade;
};

typedef struct Pessoa Pessoa;

Pessoa *cadastroPessoas();

int main(int argc, int argv)
{
    Pessoa *pes = cadastroPessoas();

    for (int i = 0; i < 10; i++)
    {
        printf("Cliente: %s. Idade: %d\n", pes[i].nome, pes[i].idade);
    }

    free(pes);

    return 0;
}

Pessoa *cadastroPessoas()
{
    Pessoa *listaPessoa = malloc(sizeof(Pessoa) * MAX_PEAPLE);

    Pessoa pessoa = {"André", 25};

    for (int i = 0; i < 10; i++)
    {
        char nome[50];
        int idade = 0;

        printf("Digite seu nome: \n");
        fgets(nome, 50, stdin);
        fflush(stdin);

        printf("Digite sua idade: \n");
        scanf("%d", &idade);
        fflush(stdin);

        strcpy(pessoa.nome, nome);
        pessoa.idade = idade;

        listaPessoa[i] = pessoa;
    }

    return listaPessoa;
}