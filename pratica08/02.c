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
    char nome[50], sobre[50], comp[100], tam=0;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite seu nome: \n");
    gets(nome);
    printf("\nDigite seu sobrenome: \n");
    gets(sobre);
    strcat(nome, sobre);
    printf("\nOl�, %s \n", nome);

    return 0;
}
