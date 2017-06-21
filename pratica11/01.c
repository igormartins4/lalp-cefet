/*
*********************************************************
*                                                       *
*   Autor: Igor Martins                                 *
*   Data: Junho de 2017                                 *
*   https://github.com/igormartins4                     *
*   Laboratório de Algoritmos e Lógica de Programação   *
*                                                       *
*********************************************************
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int SomaRec(int a[], int tam) {
    int soma=0, i;

    if (tam == 1) {
        return a[0];
    }

    else {
        for(i=0; i < tam; i++)
            soma =  a[tam-1] + SomaRec(a, tam-1);
    }

    return soma;
}

int main() {
    int tam=0, a[tam], i, soma;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDefina o tamanho do vetor a: \n");
    scanf("%d", &tam);

    for(i=0; i < tam; i++) {
        printf("\nDigite o %d valor do vetor a: \n", i+1);
        scanf("%d", &a[i]);
    }

    printf("\nTamanho do vetor a: %d \n", SomaRec(a, tam));

    return 0;
}
