#include <stdio.h>

#define CRLF '\n'

int main()
{
    float media = 0.00;

    printf("Insira a nota: ");
    scanf("%f", &media);

    if (media >= 4.00 && media < 7.00)
    {
        printf("Tem direito a exame!%c", CRLF);
    }

    return 0;
}