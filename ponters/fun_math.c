#include <stdio.h>
#include <math.h>

int main()
{
    float val1, val2, val3, val4;

    val1 = 1.69;
    val2 = 1.29;
    val3 = 2.89;
    val4 = 2.39;

    printf("Value1 = %.2lf\n", floor(val1));
    printf("Value2 = %.2lf\n", floor(val2));
    printf("Value3 = %.2lf\n", ceil(val3));
    printf("Value4 = %.2lf\n", ceil(val4));

    return (0);
}