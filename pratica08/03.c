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
#include <locale.h>

int main() {
    char p1[50], p2[50], p3[100];
    int i=0, j=0, l=0;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite uma palavra: \n");
    gets(p1);
    printf("\nDigite outra palavra: \n");
    gets(p2);
    while(p1[i] != '\0' || p2[j] != '\0') {

        if(p1[i] != '\0') {
            p3[l] = p1[i];
            i++;
            l++;
        }
        if(p2[j] != '\0') {
            p3[l] = p2[j];
            j++;
            l++;
        }
    }

    p3[l] ='\0';

    printf("\nP1: %s \n", p1);
    printf("\nP2: %s \n", p2);
    printf("\nP3: %s \n", p3);

}
