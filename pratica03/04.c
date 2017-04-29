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
    float a, b,c, delta=0, raiz1, raiz2;

    system("title Programa 3 - Maior");
    setlocale(LC_ALL, "Portuguese");

    printf("\nDigite os coeficiente ('a', 'b' e 'c')\n");
    scanf("%f%f%f", &a, &b, &c);

    if(a == 0) {
        printf("\nValor inválido para 'a'!!\n");
        system("color 4f");
    }
    else {

        delta = b * b -4 * a * c;

        if(delta >= 0) {
            raiz1 = (-b + sqrt(delta)) / (2*(a));
            raiz2 = (-b - sqrt(delta)) / (2*(a));
            printf("\nx1: %.2f\n", raiz1);
            printf("\nx2: %.2f\n", raiz2);
            system("color 2f");
        }

        else {
            printf("\nRAÍZES COMPLEXAS\n");
            system("color 4f");
        }
    }

    return 0;
}
