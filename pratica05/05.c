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

int main()
{
    int num, i=0, soma=0;
    float media;

    setlocale(LC_ALL, "Portuguese");
    do {
        printf("\nDigite o %d número inteiro (0 para parar):\n", i+1);
        scanf("%d", &num);
        if(num != 0) {
            soma += num;
            i++;
        }

        else {
            break;
        }
    } while(num != 0);

    media = soma / i;

    printf("\nMédia aritmética dos números: %.2f\n", media);

    return 0;
}
