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
    int i=0, num, maior=0;

    system("title Programa 3 - Maior");
    setlocale(LC_ALL, "Portuguese");
    while(i < 3) {
        printf("\nDigite o n�mero\n");
        scanf("%d", &num);
        i++;
        if(num > maior){
            maior = num;
        }
    }
    printf("\nO maior n�mero �: %d\n", maior);
    system("color 2f");

    return 0;
}
