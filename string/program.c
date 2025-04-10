#include <stdlib.h>
#include <stdio.h>

int main(char *args)
{
    // Character in C
    const char A = 'A';
    const char N = 'N';
    const char D = 'D';
    const char R = 'R';
    const char E = 'E';

    printf("Nome: %c%c%c%c%c\n", A, N, D, R, E);

    // String in C
    char nome[10] = {'A', 'n', 'd', 'r', 'e', '\0'};

    char string[10] = {"André"};

    char palavra[10] = "André";

    char *palavra2[10] = {};

    palavra2[0] = &palavra[0];
    palavra2[1] = &palavra[1];
    palavra2[2] = &palavra[2];
    palavra2[3] = &palavra[3];
    palavra2[4] = &palavra[4];
    palavra2[5] = &palavra[5];
    palavra2[6] = &palavra[6];
    palavra2[7] = &palavra[7];
    palavra2[8] = &palavra[8];
    palavra2[9] = &palavra[9];
    palavra2[10] = &palavra[10];

    *palavra2[0] = 'K';

    printf("Nome: %s\n", nome);
    printf("Nome: %s\n", string);
    printf("Nome: %s\n", palavra);
    printf("Nome: %s\n", *palavra2);

    char *name[10] = {&nome[0], &nome[1], &nome[2], &nome[3], &nome[4], &nome[5]};
    char *teste[10];

    teste[0] = name[0];
    teste[1] = name[1];
    teste[2] = name[2];
    teste[3] = name[3];
    teste[4] = name[4];
    teste[5] = name[5];

    *teste[0] = 'H';

    char *teste1 = "pointer";
    char *teste2 = teste1;

    printf("Nome: %s\n", *name);
    printf("Nome: %s\n", *teste);

    printf("Nome: %s\n", teste1);
    printf("Nome: %s\n", teste2);
    return 0;
}