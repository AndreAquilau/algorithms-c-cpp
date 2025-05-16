#include <stdio.h>

// Definindo Constantes em C
#define PI 3.14 // Valor de PI
#define TEXT "Input and output of data."

int main(int argc, char *argv[])
{
    int age = 0;
    float height = 0;
    char name[50] = "";

    printf("%s\n", TEXT);

    printf("Type the name: ");
    scanf("%50[^\n]s", name);

    printf("Type the age: ");
    scanf("%i", &age);

    printf("Type the height: ");
    scanf("%f", &height);

    printf("\nName: %s\nAge: %d\nHeight: %.2f\n", name, age, height);

    return 0;
}