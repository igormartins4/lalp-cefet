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
    float massa, carbono, hidrogenio, outros;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite a massa do petróleo (em quilogramas): \n");
    scanf("%f", &massa);

    carbono = massa * 0.8451;
    hidrogenio = (massa - carbono) * 0.8735;
    outros = massa - carbono - hidrogenio;

    printf("\nQuantidades no petróleo de: \n\n");
    printf("Carbono:\t\t %.2f kg\n", carbono);
    printf("Hidrogênio:\t\t %.2f kg\n", hidrogenio);
    printf("Outros componentese:\t %.2f kg\n", outros);

    return 0;
}
