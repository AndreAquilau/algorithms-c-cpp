#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Data Type Character
    char a = 'A';
    unsigned char b = 'B';
    signed char c = 'C';

    // Data Type Short
    short d = 10;
    unsigned short e = 33;
    signed short f = 56;

    // Data Type Integer
    int g = 77;
    unsigned int h = 88;
    signed int i = 99;

    // Data Type Long
    long j = 66;
    unsigned long k = 33;
    signed long l = 77;

    // Data Type Decimal

    float m = 55;
    double n = 65;
    long double o = 0;

    printf("%c\n%c\n%c\n%d\n%d\n%d\n%d\n%d\n%d\n%ld\n%ld\n%ld\n%f\n%f\n%Lf\n", a, b, c, d, e, f, g, h, i, j, k, l, m, n, o);

    return 0;
}