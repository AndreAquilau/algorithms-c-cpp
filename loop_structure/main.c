#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int main(char *args)
{
    int i = 0;

    printf("Let's go!\n");

    // while (true)
    // {
    //     printf("Seconds %ds \n", i);
    //     i++;
    //     sleep(1);
    // }

    // do
    // {
    //     printf("Seconds %ds \n", i);
    //     i++;
    //     sleep(1);
    // } while (i < 10);

    // for (int y = 0; y <= 100; y++)
    // {
    //     if ((y % 2) == 0)
    //     {
    //         printf("O número %d é par\n", y);
    //     }
    //     else
    //     {
    //         printf("O número %d é Impar\n", y);
    //     }
    // }

    int y = 0;
    double sum = 0.00, num = 0.00;

    while (y < 10)
    {
        printf("Digite o número %d para cáculo da média!\n", y + 1);
        scanf("%lf", &num);

        sum += num;

        y++;
    }

    printf("A média dos alunos é %.2lf\n", sum / y);

    return 0;
}