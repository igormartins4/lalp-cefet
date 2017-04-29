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
#include <stdlib.h>
#include <locale.h>

int main() {
    char nome[40];
    float lab, as, exf, media=0;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite o nome do estudante\n");
    scanf("%s", &nome);
    printf("\nDigite respectivamente as notas de Laboratório, Avaliação e Exame final:\n");
    scanf("%f%f%f", &lab, &as, &exf);

    media = ((lab * 2) + (as * 3) + (exf * 5)) / 10;

    if(media >= 8) {
        printf("\nNome:\t %s\n", &nome);
        printf("\nMédia Final:\t %.2f\n", &media);
        printf("\nConceito:\t A\n");
    }

    else if(media < 8 && media >= 7) {
        printf("\nNome:\t\t %s\n", &nome);
        printf("\nMédia Final:\t %.2f\n", &media);
        printf("\nConceito:\t B\n");
    }

    else if(media < 7 && media >= 6) {
        printf("\nNome:\t\t %s\n", &nome);
        printf("\nMédia Final:\t %.2f\n", &media);
        printf("\nConceito:\t C\n");
    }

    else if(media < 6 && media >= 5) {
        printf("\nNome:\t\t %s\n", &nome);
        printf("\nMédia Final:\t %.2f\n", &media);
        printf("\nConceito:\t D\n");
    }

    else if(media < 5) {
        printf("\nNome:\t\t %s\n", &nome);
        printf("\nMédia Final:\t %.2f\n", &media);
        printf("\nConceito:\t E\n");
    }

    else {
        printf("\nERROR\n");
        system("color 4f");
    }

    return 0;
}
