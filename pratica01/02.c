/*
*********************************************************
*                                                       *
*   Autor: Igor Martins                                 *
*   Data: Mar�o de 2017                                 *
*   https://github.com/igormartins4                     *
*   Laborat�rio de Algoritmos e L�gica de Programa��o   *
*                                                       *
*********************************************************
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    float raio, area;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite a �rea do c�rculo: \n");
    scanf("%f", &raio);

    area = (raio * raio) * 3.14159265359;

    printf("\n�rea do c�rculo: %.2f \n", area);

    return 0;
}

