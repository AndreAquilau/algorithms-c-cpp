#include <stdio.h>
#include <stdlib.h>


int main()
{
    char nome[] = { 'A', 'n', 'd', 'r', 'e', '\0' };
    char palavra[100] = {"Carro"};
    char string[] = "Let´s go ";

    printf("%s\n", nome);
    printf("%s\n", palavra);
    printf("%s\n", string);

    return 0;
}
