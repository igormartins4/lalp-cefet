/*
*********************************************************
*                                                       *
*   Autor: Igor Martins                                 *
*   Data: Abril de 2017                                 *
*   https://github.com/igormartins4                     *
*   Laborat�rio de Algoritmos e L�gica de Programa��o   *
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
    printf("\nDigite qual opera��o ser� feita: (+, -, *, /)\n");
    scanf("%c", &op);
    printf("\nDigite os dois n�meros:\n");
    scanf("%f%f", &num1, &num2);

    switch (op) {

        case '+':
            resul = num1 + num2;
            printf("\nResultado da soma: %.2f + %.2f = %.2f\n", num1, num2, resul);
            break;

        case '-':
            resul = num1 - num2;
            printf("\nResultado da subtra��o: %.2f - %.2f = %.2f\n", num1, num2, resul);
            break;

        case '*':
            resul = num1 * num2;
            printf("\nResultado da multiplica��o: %.2f * %.2f = %.2f\n", num1, num2, resul);
            break;

        case '/':
            resul = num1 / num2;
            if(num2 == 0) {
                printf("\nImposs�vel dividir por zero!\n");
            }
            else {
                    printf("\nResultado da divis�o: %.2f / %.2f = %.2f\n", num1, num2, resul);
            }
            break;

        default:
            printf("\nOp��o Inv�lida!\n");
    }

    return 0;
}
