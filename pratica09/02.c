/*
*********************************************************
*                                                       *
*   Autor: Igor Martins                                 *
*   Data: Maio de 2017                                 *
*   https://github.com/igormartins4                     *
*   Laboratório de Algoritmos e Lógica de Programação   *
*                                                       *
*********************************************************
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define num 50

struct contas {
    char nome[100];
    char rua[100];
    int numero;
    int cpf;
    float saldo;
};

int main() {
    struct contas cliente[num];
    int i, j;
    float totsaldo;

    setlocale(LC_ALL, "Portuguese");

    for(i=0; i<num; i++) {
        printf("\nDigite seu nome: \n");
        fflush(stdin);
        gets(cliente[i].nome);
        printf("\nDigite sua rua: \n");
        fflush(stdin);
        gets(cliente[i].rua);
        printf("\nDigite seu número: \n");
        scanf("%d", &cliente[i].numero);
        printf("\nDigite seu CPF: (Somente números!!)\n");
        scanf("%d", &cliente[i].cpf);
        printf("\nDigite seu saldo: \n");
        scanf("%f", &cliente[i].saldo);

        totsaldo += cliente[i].saldo;
    }

    printf("\nSaldo Total: \t RS %.2f \n", totsaldo);

    return 0;
}
