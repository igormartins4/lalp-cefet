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
    float sal, agua, luz, tel, aluguel, resto, total;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite seu sal�rio: \n");
    scanf("%f", &sal);
    printf("\nDigite os valores gastos com as contas de �gua, luz, telefone e aluguel\n");
    scanf("%f%f%f%f", &agua, &luz, &tel, &aluguel);

    total = agua + luz + tel + aluguel;
    resto = sal - total;

    printf("\nValor Total das contas: %.2f\n", total);
    printf("\nRestante do sal�rio: %.2f\n", resto);

    return 0;
}
