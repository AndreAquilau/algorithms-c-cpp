#include <stdio.h>
#include <stdlib.h>

double greaterNumber(double firstNumber, double lastNumber);

int main(char *argc, char *argv)
{
    double gt = 0.00;
    double firstNumber = 0.00;
    double lastNumber = 0.00;

    printf("Digite o primeiro número: ");
    scanf("%lf", &firstNumber);
    fflush(stdin);

    printf("Digite o segundo número: ");
    scanf("%lf", &lastNumber);
    fflush(stdin);

    gt = greaterNumber(firstNumber, lastNumber);

    printf("O maior número é %.2lf\n", gt);

    return 0;
}

double greaterNumber(double firstNumber, double lastNumber)
{
    return firstNumber > lastNumber ? firstNumber : lastNumber;
}