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
    float sal, agua, luz, tel, aluguel, resto, total;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite seu salário: \n");
    scanf("%f", &sal);
    printf("\nDigite os valores gastos com as contas de água, luz, telefone e aluguel\n");
    scanf("%f%f%f%f", &agua, &luz, &tel, &aluguel);

    total = agua + luz + tel + aluguel;
    resto = sal - total;

    printf("\nValor Total das contas: %.2f\n", total);
    printf("\nRestante do salário: %.2f\n", resto);

    return 0;
}
