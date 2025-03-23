#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(char *args)
{
    float peso = 2.5362;
    double pesoFloor = floor(peso);
    double pesoCeil = ceil(peso);
    char stringPeso[255];

    sprintf(stringPeso, "%g", pesoFloor);

    printf("Peso: %.2lf\n", peso);
    printf("Peso Floor: %.2lf\n", pesoFloor);
    printf("Peso Ceil: %.2lf\n", pesoCeil);
    printf("Peso String: %s\n", stringPeso);

    return 0;
}