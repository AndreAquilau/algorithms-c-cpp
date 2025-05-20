#include <stdlib.h>
#include <stdio.h>

struct Pessoa
{
    char nome[40];
    int idade;
};

typedef struct Pessoa Pessoa;

void to_string(Pessoa pessoa);

int main()
{
    Pessoa pessoa = {"André da Silva", 25};

    to_string(pessoa);

    return 0;
}

void to_string(Pessoa pessoa)
{
    printf("{\n");
    printf("    \"nome\": \"%s\",\n", pessoa.nome);
    printf("    \"idade\": \"%d\"\n", pessoa.idade);
    printf("}\n");
}