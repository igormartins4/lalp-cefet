#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    float sal, salp, nsal;
    char pl;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite qual � seu plano de trabalho: (A, B, C)\n");
    scanf("%c", &pl);
    printf("\nDigite o seu sal�rio:\n");
    scanf("%f", &sal);

    switch (pl) {

        case 'A':
            salp = sal * 0.1;
            nsal = sal + salp;
            printf("\nNovo sal�rio com Plano A: %.2f\n", nsal);
            break;

        case 'B':
            salp = sal * 0.15;
            nsal = sal + salp;
            printf("\nNovo sal�rio com Plano B: %.2f\n", nsal);
            break;

        case 'C':
            salp = sal * 0.2;
            nsal = sal + salp;
            printf("\nNovo sal�rio com Plano C: %.2f\n", nsal);
            break;

        default:
            printf("\nOp��o Inv�lida!\n\n");

    }
    return 0;
}
