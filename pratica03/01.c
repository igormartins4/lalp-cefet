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
    char time1[40], time2[40];
    int gols1, gols2;

    system("title Programa 1 - Times");
    setlocale(LC_ALL, "Portuguese");

    printf("\nDigite o nome dos dois times\n");
    scanf("%s%s", &time1, &time2);
    printf("\nDigite os gols marcados por cada time na partida\n");
    scanf("%s%s", &gols1, &gols2);
    if(gols1 > gols2) {
        printf("\nTime %s é o vencedor\n", time1);
        system("color 2f");
    }
    else if(gols2 > gols1) {
        printf("\nTime %s é o vencedor\n", time2);
        system("color 2f");
    }
    else if(gols1 == gols2) {
        printf("\nEMPATE\n");
        system("color 4f");
    }
    else {
        printf("\nERROR\n");
        system("color 4f");
    }

    return 0;
}
