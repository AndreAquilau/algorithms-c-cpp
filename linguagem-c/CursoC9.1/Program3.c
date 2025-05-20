#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

struct Pessoa
{
    char nome[40];
    int idade;
};

typedef struct Pessoa Pessoa;

Pessoa *list_pessoas_v1(Pessoa list[], int length);
Pessoa *list_pessoas_v2(Pessoa list[10], int length);
Pessoa *list_pessoas_v3(Pessoa list[][10], int length1);
int list_number(int count, ...);

int main()
{
    puts("Inicio!");
    list_number(10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9);
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

int list_number(int count, ...)
{
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        printf("Indice: %d\n", i);
    }

    return 0;
}