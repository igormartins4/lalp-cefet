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
    float htrs=0, salb=0, inss=0, ir=0, sall=0;
    int depen=0;
    char nome[20];

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite seu nome\n");
    scanf("%s", &nome);

    printf("\nDigite o n�mero de horas trabalhadas\n");
    scanf("%f", &htrs);

    printf("\nDigite o n�mero de dependentes\n");
    scanf("%f", &depen);

    if(depen = 0) {
        salb = (htrs * 12);
    }
    else {
        salb = (htrs * 12) + (depen * 40);
    }

    inss = salb * 0.85;
    ir = salb * 0.5;
    sall = (inss + ir) - salb;

    printf("\n\nNome: \t\t\t\t %s \n", nome);
    printf("Sal�rio Bruto: \t\t\t %.2f \n", salb);
    printf("Desconto INSS: \t\t\t %.2f \n", inss);
    printf("Desconto Imposto de Renda: \t %.2f \n", ir);
    printf("\Sal�rio L�quido: \t\t %.2f \n\n", sall);

    return 0;
 }
