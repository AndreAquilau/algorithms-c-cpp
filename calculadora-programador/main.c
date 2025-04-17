#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *decimalToBinary(long number);

void main()
{
    long input = 0;
    char *output = 0;

    printf("Digite um número decimal: ");

    scanf("%ld", &input);

    output = decimalToBinary(input);

    printf("From %ld to %s\n", input, output);

    exit(0);
}

char *decimalToBinary(long number)
{
    double rest = 0;
    char *binary = malloc(sizeof(char));
    unsigned short block = 0;
    char *binaryString = malloc(sizeof(char));
    int bit = 0;
    int size = 0;
    int i = 0;

    do
    {
        rest = number / 2;

        binary[i] = number % 2 == 0 ? '0' : '1';

        number = rest;

        if (block == 7 && rest == 0)
        {
            block = 8;
            binary[i + 1] = '\0';
        }
        else if (block == 7)
        {
            block = 0;
        }
        else
        {
            block++;
        }

        i++;

    } while (rest >= 0 && block <= 7);

    size = strlen(binary);

    for (int j = size; j >= 0; j--)
    {

        if (binary[j] == '\0')
        {
            continue;
        }

        binaryString[bit] = binary[j];

        if (j == 0)
        {
            binaryString[bit + 1] = '\0';
        }

        bit++;
    }

    return binaryString;
}