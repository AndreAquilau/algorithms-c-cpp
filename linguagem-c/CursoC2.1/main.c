#include <stdio.h>

int main(int argc, char *argv[])
{

    printf("Especificadores de formato: printf()\n\n");

    printf("Ano de Nascimento: %i\n", 2000);
    printf("Idade: %d\n", 25);
    // Decimal to Hexadecimal
    printf("Base Hexadecimal: %X\n", 10);
    // Decinal to Octal;
    printf("Base Octal: %o\n", 10);
    printf("Notação ciencitífca: %e\n", 15.00);
    printf("Caracter: %% %c\n", 'C');
    printf("Sequencia de Caracteres: %s\n", "André Da Silva Aquilau");
    printf("Real: %.2f\n", 25.5555);

    printf("\n");

    printf("Sequencias de Escape: printf() \n\n");

    printf("\a\a\a\a");
    printf("a\b\tb\rHome\v\0\n");
    printf("\\");
    printf("\?\n");
    printf("Char : %s\n", "\123");
    printf("Char : \x50 \n");
    printf("Char : %c\n", (char)65);
    printf("Char : %c\n", (char)0b0 + 1000001);

    return 0;
}