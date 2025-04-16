#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

long double delta(long double a, long double b, long double c);
void bhaskara(long double a, long double b, long double delta);

int main()
{
    long double a = 1, b = 12, c = -13;
    long double deltaResult;

    printf("Digite o valor da letra A: ");
    scanf("%LF", &a);
    printf("Digite o valor da letra B: ");
    scanf("%LF", &b);
    printf("Digite o valor da letra C: ");
    scanf("%LF", &c);

    deltaResult = delta(a, b, c);

    printf("\nDelta: %.0LF\n", deltaResult);
    bhaskara(a, b, deltaResult);

    return 0;
}

long double delta(long double a, long double b, long double c)
{
    return pow(b, 2) - 4 * (a * c);
}

void bhaskara(long double a, long double b, long double delta)
{
    long double x1 = 0, x2 = 0;
    x1 = (-b + (sqrt(delta))) / (2 * a);
    x2 = (-b - (sqrt(delta))) / (2 * a);

    printf("\nValor x1 = %.2LF\n", x1);
    printf("Valor x2 = %.2LF\n", x2);

    return;
}