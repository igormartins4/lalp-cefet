/*
*********************************************************
*                                                       *
*   Autor: Igor Martins                                 *
*   Data: Março de 2017                                 *
*   https://github.com/igormartins4                     *
*   Laboratório de Algoritmos e Lógica de Programação   *
*                                                       *
*********************************************************
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    float nota1, nota2, nota3, peso1, peso2, peso3, media;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite as três notas e depois os seus pesos:\n");
    scanf("%f%f%f", &nota1, &nota2, &nota3);
    scanf("%f%f%f", &peso1, &peso2, &peso3);

    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    printf("\nMédia ponderada: %.2f \n", media);

    return 0;
}

