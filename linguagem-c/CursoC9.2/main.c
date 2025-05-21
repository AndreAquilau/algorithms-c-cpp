#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <functions.c>

#define VERSION "1.0.0"

int main(int argc, char *argv[])
{

    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "--version") == 0)
        {
            printf("Version: %s\n", VERSION);
        }
        else
        {
            printf("Parameters: %s\n", argv[i]);
        }
    }

    return 0;
}