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
    int i=0, num, maior=0;

    system("title Programa 3 - Maior");
    setlocale(LC_ALL, "Portuguese");
    while(i < 3) {
        printf("\nDigite o número\n");
        scanf("%d", &num);
        i++;
        if(num > maior){
            maior = num;
        }
    }
    printf("\nO maior número é: %d\n", maior);
    system("color 2f");

    return 0;
}
