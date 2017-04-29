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

    float raio, area;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite a área do círculo: \n");
    scanf("%f", &raio);

    area = (raio * raio) * 3.14159265359;

    printf("\nÁrea do círculo: %.2f \n", area);

    return 0;
}

