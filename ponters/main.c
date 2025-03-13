#include <stdio.h>
#include <stdbool.h>

int soma(int x, int y, int *z);

int main()
{
    char n = 'N';
    char *N = &n;

    *N = 'n';

    printf("%p\n", &n);
    printf("%p\n", N);

    printf("%c\n", n);
    printf("%c\n", *N);

    return 0;
}

int soma(int x, int y, int *z)
{
    *z = x + y;

    printf("%p\n", z);

    return 0;
}