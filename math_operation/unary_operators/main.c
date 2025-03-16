#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 0;
    int b = 0;

    // Operadores unarios
    a++;
    b++;

    printf("%d\n", a);
    printf("%d\n", b);

    a += 5;
    b += 5;

    printf("%d\n", a);
    printf("%d\n", b);

    a--;
    b--;

    printf("%d\n", a);
    printf("%d\n", b);

    a -= 5;
    b -= 5;

    printf("%d\n", a);
    printf("%d\n", b);

    a += 10;
    b += 10;

    printf("%d\n", a);
    printf("%d\n", b);

    a *= 2;
    b *= 2;

    printf("%d\n", a);
    printf("%d\n", b);

    a /= 2;
    b /= 2;

    printf("%d\n", a);
    printf("%d\n", b);

    a %= 2;
    b %= 2;

    printf("%d\n", a);
    printf("%d\n", b);

    // Operadores aritiméticos do C
    int soma = 1 + 1;
    float subtracao = 15 - 5;
    double multiplicacao = 15 * 5;
    float divisao = 10 / -2;
    int modulo = 10 % 2;

    printf("Soma: %d\n", soma);
    printf("Subtracao: %f\n", subtracao);
    printf("Multiplicacao: %lf\n", multiplicacao);
    printf("Divisao: %lf\n", -divisao);
    printf("Modulo: %d\n", modulo);

    return 0;
}