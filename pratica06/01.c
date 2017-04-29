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
    int a[10], x, i, j, achei=0;

    setlocale(LC_ALL, "Portuguese");
    for(i=0; i<10; i++) {
        printf("\nDigite o %dº número inteiro: \n", i+1);
        scanf("%d", &a[i]);
    }
    printf("\nDigite o número que será comparado: \n");
    scanf("%d", &x);
    for(j=0; j<10; j++) {
        if(a[i] == x) {
            achei=1;
        }
    }
    if(achei = 1) {
        printf("\nACHEI\n");
    }
    else {
        printf("\nNÃO ACHEI\n");
    }

    return 0;
}
