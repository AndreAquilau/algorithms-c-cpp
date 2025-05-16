#include <stdio.h>
#include <string.h>

int equal(char *source, char *compare);

int main()
{
    char *carteira = "C4";
    char c = carteira[1];

    switch (c)
    {
    case '4':
    {
        printf("Carteira C4\n");
        break;
    }
    default:
    {
        printf("Carteira não encontrada!\n");
        break;
    }
    }

    printf("Igual : %d\n", equal("C4", "C5"));

    return 0;
}

int equal(char *source, char *compare)
{
    int isEqual = 1;

    if (strlen(source) != strlen(compare))
    {
        return 0;
    }

    for (int i; i <= strlen(source); i++)
    {
        if (source[i] != compare[i])
        {
            isEqual = 0;
            break;
        }
    }

    return isEqual;
}