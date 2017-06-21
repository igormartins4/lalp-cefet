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
#define tam 10

int main() {

    FILE *arq;

    char frase;
    int i;

    setlocale(LC_ALL, "Portuguese");

    arq = fopen("caracteres.txt", "a");

    if(arq == NULL) {
        printf("\nERRO na abertura do arquivo!\n");
        system("color cf");
    }
    else {
        printf("\nDigite os caracteres (Digite 0 para sair): \n");
        do {
            scanf("%c", &frase);
            fputc(frase, arq);

            if(ferror(arq)) {
                printf("\nERRO na gravação do caractere!\n");
                system("color cf");
            }
        }while(frase != '0');
    }

    if(fclose(arq)!= 0) {
        printf("\nERRO no fechamento do arquivo!\n");
        system("color cf");
    }
    return 0;
}
