#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

// #define typeof(var) _Generic((var), char: "Character", int: "Integer", double: "Double", float: "Float", bool: "Boolean", default: "Unknown")

#define typeofdata(var) _Generic((var), char: "Character", int: "Integer", double: "Double", float: "Float", bool: "Boolean", default: "Unknown")

int main()
{
    char principal = 'N';

    printf("Tipo de Pessoa: %s\n", typeofdata(principal));

    return 0;
}