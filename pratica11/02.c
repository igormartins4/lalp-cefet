/*
*********************************************************
*                                                       *
*   Autor: Igor Martins                                 *
*   Data: Junho de 2017                                 *
*   https://github.com/igormartins4                     *
*   Laborat�rio de Algoritmos e L�gica de Programa��o   *
*                                                       *
*********************************************************
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int PotenciaRec(int b, int e) {
    int resul=0, i;

    if (e == 1) {
        return b;
    }

    else if(e == 0) {
        return 1;
    }

    else {
        for(i=0; i < e; i++)
            resul =  b * PotenciaRec(b, e-1);
    }

    return resul;
}

int main() {
    int b, e;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite a base da pot�ncia: \n");
    scanf("%d", &b);

    printf("\nDigite o expoente da pot�ncia: \n");
    scanf("%d", &e);

    printf("\nResultado: %d \n", PotenciaRec(b, e));

    return 0;
}
