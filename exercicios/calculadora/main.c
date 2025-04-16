#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int operacoes();

int main()
{
    operacoes();

    return 0;
}

int operacoes()
{
    int operacao = 0;
    long double primeiroOperando = 0.00;
    long double segundoOperando = 0.00;
    long double resultado = 0.00;
    short int exit = 0;

    char *listaOpecoes[5] = {};

    listaOpecoes[1] = "+";
    listaOpecoes[2] = "-";
    listaOpecoes[3] = "/";
    listaOpecoes[4] = "*";
    listaOpecoes[0] = "0 - Sair";

    do
    {
        printf("\n Operações disponíveis\n");
        printf(" 1 - Soma (+)\n");
        printf(" 2 - Subtração (-)\n");
        printf(" 3 - Divisão (/)\n");
        printf(" 4 - Multiplicação (*)\n");
        printf(" 0 - Sair\n");

        printf("\nDigite a opção selecionada: ");
        scanf("%1d", &operacao);

        system("clear");

        switch (operacao)
        {
        case 1:
        {
            printf("Realizando Operação de Soma: \n\n");
            break;
        }
        case 2:
        {
            printf("Realizando Operação de Subtração: \n\n");
            break;
        }
        case 3:
        {
            printf("Realizando Operação de Divisão: \n\n");
            break;
        }
        case 4:
        {
            printf("Realizando Operação de Multiplocação: \n\n");
            break;
        }
        default:
        {
            printf("Operação inválida!");
            continue;
            break;
        }
        }

        printf("Digite o primeiro operando: ");
        scanf("%LF", &primeiroOperando);

        printf("Digite o segundo operando: ");
        scanf("%LF", &segundoOperando);

        switch (operacao)
        {
        case 1:
        {
            printf("\nRealizando Operação de Soma: \n\n");
            resultado = primeiroOperando + segundoOperando;
            break;
        }
        case 2:
        {
            printf("\nRealizando Operação de Subtração: \n\n");
            resultado = primeiroOperando - segundoOperando;
            break;
        }
        case 3:
        {
            printf("\nRealizando Operação de Divisão: \n\n");

            resultado = (segundoOperando = 0 ? 0 : primeiroOperando / segundoOperando);
            break;
        }
        case 4:
        {
            printf("\nRealizando Operação de Multiplocação: \n\n");
            resultado = primeiroOperando * segundoOperando;
            break;
        }
        default:
        {
            printf("Operação inválida!");
            continue;
            break;
        }
        }

        if (abs((resultado - floor(resultado))) > 0.00)
            printf("Calculando : %.2LF %s %.2LF = %.2LF\n", primeiroOperando, listaOpecoes[operacao], segundoOperando, resultado);
        else
            printf("Calculando : %0.LF %s %.0LF = %0.LF\n", primeiroOperando, listaOpecoes[operacao], segundoOperando, resultado);

        printf("\n\nDigite 0 para retorna ao Menu: ");

        scanf("%hd[^\n]", &exit);

        system("clear");

    } while (operacao != 0);

    return operacao;
}
