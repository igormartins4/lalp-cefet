/*
*********************************************************
*                                                       *
*   Autor: Igor Martins                                 *
*   Data: Abril de 2017                                 *
*   https://github.com/igormartins4                     *
*   Laboratório de Algoritmos e Lógica de Programação   *
*                                                       *
*********************************************************
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    float num1, num2, resul;
    char op;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite qual operação será feita: (+, -, *, /)\n");
    scanf("%c", &op);
    printf("\nDigite os dois números:\n");
    scanf("%f%f", &num1, &num2);

    switch (op) {

        case '+':
            resul = num1 + num2;
            printf("\nResultado da soma: %.2f + %.2f = %.2f\n", num1, num2, resul);
            break;

        case '-':
            resul = num1 - num2;
            printf("\nResultado da subtração: %.2f - %.2f = %.2f\n", num1, num2, resul);
            break;

        case '*':
            resul = num1 * num2;
            printf("\nResultado da multiplicação: %.2f * %.2f = %.2f\n", num1, num2, resul);
            break;

        case '/':
            resul = num1 / num2;
            if(num2 == 0) {
                printf("\nImpossível dividir por zero!\n");
            }
            else {
                    printf("\nResultado da divisão: %.2f / %.2f = %.2f\n", num1, num2, resul);
            }
            break;

        default:
            printf("\nOpção Inválida!\n");
    }

    return 0;
}
