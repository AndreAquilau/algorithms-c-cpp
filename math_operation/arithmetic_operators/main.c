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

    return 0;
}