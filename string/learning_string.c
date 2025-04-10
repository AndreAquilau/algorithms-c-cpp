#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int binaryName[5] =
        {
            0b01000001, // Letter - A
            0b01001110, // Letter - N
            0b01000100, // Letter - D
            0b01010010, // Letter - R
            0b01000101  // Letter - E
        };

    char nameString[5] = {};

    for (int i = 0; i < (sizeof(binaryName) / sizeof(binaryName[0])); i++)
    {
        nameString[i] = (char)((int)binaryName[i]);
    }

    printf("Nome: %s\n", nameString);

    return 0;
}
