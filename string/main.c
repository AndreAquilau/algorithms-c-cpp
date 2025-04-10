#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[100];

    printf("Typing your name: ");

    scanf("%[^\n]", name);

    printf("\nYour name are %s\n", name);

    return 0;
}