#include <stdlib.h>
#include <stdio.h>

int main()
{
    int par[] = {2, 4, 6};
    int *outher[3] = {};

    outher[0] = &par[0];
    outher[1] = &par[1];
    outher[2] = &par[2];

    *outher[0] = 777;

    printf("%d\n", par[0]);

    return 0;
}