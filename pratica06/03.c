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

//      PROGRAMA COM ERROS!!

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int v[9], divisor=0, i, j, pos, primo;

    setlocale(LC_ALL, "Portuguese");
    for(i=0; i<9; i++) {
        printf("\nDigite o %dº número inteiro: \n", i+1);
        scanf("%d", &v[i]);
        for(j=1; j < v[i]; j++ ) {
            if(v[i] % j == 0) {
                divisor++;
            }
       }
       if(divisor <= 2) {
            printf("\n\nPrimo: %d, vetor[%d]\n", v[i], i);
            divisor = 0;
        }
    }
    return 0;
}
