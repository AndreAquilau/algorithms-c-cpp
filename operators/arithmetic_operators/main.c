#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 0;
    int b = 0;

    // Operadores Aritmeticos
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

    int x = 10, y;

    y = (x++ * 0) + x;

    printf("Valor de (y = ++x) : %d\n", y);
    printf("Valor de ++x : %d\n", x);

    return 0;
}