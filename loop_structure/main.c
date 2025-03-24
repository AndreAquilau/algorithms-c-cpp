#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int main(char *args)
{
    int i = 0;

    printf("Let's go!\n");

    /*
    while (true)
    {
        printf("Seconds %ds \n", i);
        i++;
        sleep(1);
    }
    */

    do
    {
        printf("Seconds %ds \n", i);
        i++;
        sleep(1);
    } while (i < 0);

    return 0;
}