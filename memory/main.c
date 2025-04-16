#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void display(int x, int y);
char getCharacter();
unsigned char getCharUnsigned();
signed char getCharSigned();
_Bool isAtivo();
int *numbers();

int main()
{
    int *test = numbers();
    // display(5, 10);

    // printf("Caracter: %c\n", getCharacter());

    // printf("Caracter: %c\n", getCharUnsigned());

    // printf("Caracter: %c\n", getCharSigned());

    // printf("Ativo : %d\n", isAtivo());

    free(test);

    printf("int %ld\n", sizeof(int));

    getchar();

    return 0;
}

// Check
void display(int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

_Bool isAtivo()
{
    int ativo = 0;

    printf("Digite 0 ou 1: ");

    scanf("%d[^\n]", &ativo);

    return (_Bool)ativo;
}

// Check
char getCharacter()
{
    char character;

    printf("Digite um caracter: ");

    scanf("%1c[^\n]", &character);

    return character;
}

// Check
unsigned char getCharUnsigned()
{
    unsigned char character;

    printf("Digite um Caracter: ");

    scanf("%1c[^\n]", &character);

    return character;
}

// Check
signed char getCharSigned()
{
    signed char character = '\0';

    printf("Digite um Caracter: ");

    scanf("%1c[^\n]", &character);

    return character;
}
