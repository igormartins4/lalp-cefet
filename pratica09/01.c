/*
*********************************************************
*                                                       *
*   Autor: Igor Martins                                 *
*   Data: Maio de 2017                                 *
*   https://github.com/igormartins4                     *
*   Laboratório de Algoritmos e Lógica de Programação   *
*                                                       *
*********************************************************
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define num 100

struct pessoa {
    char nome[100];
    int idade;
};

int main() {
    struct pessoa p[num];
    int i, j;

    setlocale(LC_ALL, "Portuguese");

    for(i=0; i<num; i++) {
        printf("\nDigite seu nome: \n");
        fflush(stdin);
        gets(p[i].nome);
        printf("\nDigite sua idade: \n");
        scanf("%d", &p[i].idade);
    }

    for(j=0; j<num; j++) {
        if(p[j].idade >= 18) {
            printf("\n%s", p[j].nome);
        }
    }
    printf("\n");
    return 0;
}
