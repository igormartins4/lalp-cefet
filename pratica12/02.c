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
#define tam 10

int main() {

    FILE *arq;

    char frase;
    int i;

    setlocale(LC_ALL, "Portuguese");

    arq = fopen("caracteres.txt", "r");

    if(arq == NULL) {
        printf("\nERRO na abertura do arquivo!\n");
        system("color cf");
    }

    else {
        printf("\nLendo o arquivo e imprimindo-o: \n");
        printf("\n");
        while( (frase=fgetc(arq))!= EOF ) {
            putchar(frase);

            if(ferror(arq)) {
                printf("\nERRO na leitura do arquivo!\n");
                system("color cf");
            }
       }
       printf("\n");
    }

    if(fclose(arq)!= 0) {
        printf("\nERRO no fechamento do arquivo!\n");
        system("color cf");
    }

    return 0;
}
