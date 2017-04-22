#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int a, b, i, potencia;

    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite o valor de A e B:\n");
    scanf("%d%d", &a, &b);
    if(a == 0) {
        printf("\nPotência de B com base A: 0\n\n");
    }
    else if(b == 0) {
        printf("\nPotência de B com base A: 1\n\n");
    }

    else {
        for(i=0; i<b; i++){
            potencia = a * a;
        }

        printf("\nPotência de B com base A: %d\n\n", potencia);
    }

    return 0;
}
