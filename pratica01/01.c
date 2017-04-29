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

    int idade;
    char nome[20];
    float peso, alt, imc;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite seu nome\n");
    scanf("%s", &nome);

    printf("\nDigite sua idade\n");
    scanf("%d", &idade);

    printf("\nDigite seu peso\n");
    scanf("%f", &peso);

    printf("\nDigite sua altura\n");
    scanf("%f", &alt);

    imc = peso / (alt * alt);

    printf("\n\nNome: \t %s \n", nome);
    printf("Idade: \t %d \n", idade);
    printf("Peso: \t %.2f \n", peso);
    printf("IMC: \t %.2f \n", imc);

    return 0;
 }
