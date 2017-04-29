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

int main()
{
    signed int somapa=0, somaimp=0, soma=0, num, i=0;

    setlocale(LC_ALL, "Portuguese");
    do {
        i++;
        printf("\nDigite o %d n�mero inteiro (0 para parar):\n", i);
        scanf("%d", &num);
        if(num%2 == 0 && num != 0) {
            somapa += num;
        }

        else if(num%2 != 0 && num != 0) {
            somaimp += num;
        }

        else {
            break;
        }
    } while(num != 0);

    soma = somapa + somaimp;

    printf("\nSoma dos n�meros pares: %d\n", somapa);
    printf("\nSoma dos n�meros �mpares: %d\n", somaimp);
    printf("\nSoma de todos os n�meros: %d\n", soma);

    return 0;
}
