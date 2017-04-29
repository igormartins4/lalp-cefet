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
    int idade[5], maior=0, maiores=0, i=0;

    setlocale(LC_ALL, "Portuguese");
    do {
        printf("\nDigite a %d idade:\n\n", i+1);
        scanf("%d", &idade[i]);
        if(idade[i] >= 18) {
            maiores++;
        }
        i++;
    }while(i<5);
    printf("\n\n%d pessoas são maiores de idade\n\n", maiores);

    return 0;
}
