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
#include <locale.h>

int main() {
    char palavra[50], tam=0;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite a palavra: \n");
    gets(palavra);
    tam = strlen(palavra);
    printf("Tamanho: %d \n", tam);

    return 0;
}
