/*
*********************************************************
*                                                       *
*   Autor: Igor Martins                                 *
*   Data: Junho de 2017                                 *
*   https://github.com/igormartins4                     *
*   Laborat�rio de Algoritmos e L�gica de Programa��o   *
*                                                       *
*********************************************************
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Fib(int n) {
    int resul=0;

    if(n < 3) {
        return 1;
    }

    else {
        resul = Fib(n-2) + Fib(n-1);
        //resul = n * Fib(n - 1);
    }

    return resul;
}

int main() {
    int n;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite o n�mero da sequ�ncia de Fibonacci: \n");
    scanf("%d", &n);

    printf("\n%d� n�mero da sequ�ncia de Fibonacci: %d \n", n, Fib(n));

    return 0;
}
