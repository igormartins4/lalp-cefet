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
    char nome[50], sobre[50], comp[100], tam=0;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite seu nome: \n");
    gets(nome);
    printf("\nDigite seu sobrenome: \n");
    gets(sobre);
    strcat(nome, sobre);
    printf("\nOlá, %s \n", nome);

    return 0;
}
