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
    int cod, qtd;
    float total;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite o c�digo do produto\n");
    scanf("%d", &cod);

    switch (cod) {

        case 100:
            printf("\nDigite a quantidade de Cachorro-Quente\n");
            scanf("%d", &qtd);
            total = qtd * 1.20;
            printf("\nTotal a pagar: %.2f\n", total);
            break;

        case 101:
            printf("\nDigite a quantidade de Bauru simples\n");
            scanf("%d", &qtd);
            total = qtd * 1.30;
            printf("\nTotal a pagar: %.2f\n", total);
            break;

        case 102:
            printf("\nDigite a quantidade de Bauru com ovo\n");
            scanf("%d", &qtd);
            total = qtd * 1.50;
            printf("\nTotal a pagar: %.2f\n", total);
            break;

        case 103:
            printf("\nDigite a quantidade de Hamb�rger\n");
            scanf("%d", &qtd);
            total = qtd * 1.20;
            printf("\nTotal a pagar: %.2f\n", total);
            break;

        case 104:
            printf("\nDigite a quantidade de Cheeseburguer\n");
            scanf("%d", &qtd);
            total = qtd * 1.30;
            printf("\nTotal a pagar: %.2f\n", total);
            break;

        case 105:
            printf("\nDigite a quantidade de Refrigerante\n");
            scanf("%d", &qtd);
            total = qtd * 1.00;
            printf("\nTotal a pagar: %.2f\n", total);
            break;

        default:
            printf("\nOp��o Inv�lida!\n\n");
    }

    return 0;
}
