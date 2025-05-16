#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

int main(char *argc[], char *argv[])
{
    short contador = 0;

    while (contador <= 255)
    {
        contador++;

        printf("Número: %d\n", contador);

        sleep(1);
    }

    return 0;
}