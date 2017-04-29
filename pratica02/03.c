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
    float massa, carbono, hidrogenio, outros;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite a massa do petr�leo (em quilogramas): \n");
    scanf("%f", &massa);

    carbono = massa * 0.8451;
    hidrogenio = (massa - carbono) * 0.8735;
    outros = massa - carbono - hidrogenio;

    printf("\nQuantidades no petr�leo de: \n\n");
    printf("Carbono:\t\t %.2f kg\n", carbono);
    printf("Hidrog�nio:\t\t %.2f kg\n", hidrogenio);
    printf("Outros componentese:\t %.2f kg\n", outros);

    return 0;
}
