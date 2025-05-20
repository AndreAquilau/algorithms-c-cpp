#include <stdlib.h>
#include <stdio.h>

struct Pessoa
{
    char nome[40];
    int idade;
};

typedef struct Pessoa Pessoa;

Pessoa *list_pessoas_v1(Pessoa list[], int length);
Pessoa *list_pessoas_v2(Pessoa list[10], int length);
Pessoa *list_pessoas_v3(Pessoa list[][10], int length1);

int main()
{
    puts("Inicio!");
    Pessoa pessoas[1] = {{"Andre", 25}};
    list_pessoas_v1(pessoas, 1);
    return 0;
}

Pessoa *list_pessoas_v1(Pessoa list[], int length)
{
    Pessoa *pessoas = malloc(sizeof(Pessoa) * length);

    return pessoas;
}

Pessoa *list_pessoas_v2(Pessoa list[10], int length)
{
    Pessoa *pessoas = malloc(sizeof(Pessoa) * length);

    return pessoas;
}

Pessoa *list_pessoas_v3(Pessoa list[][10], int length1)
{
    Pessoa *pessoas = malloc(sizeof(Pessoa) * length1);

    return pessoas;
}