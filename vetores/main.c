#include <stdio.h>
#include <string.h>

int main()
{
    short numeros = {5};

    printf("Short in Bits: %d\n", (int)sizeof(numeros) * 8);

    return 0;
}