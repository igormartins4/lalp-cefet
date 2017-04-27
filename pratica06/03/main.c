#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int v[9], p[9], divisor=0, i, j, pos;
    int primo = 0;;

    setlocale(LC_ALL, "Portuguese");
    for(i=0; i<9; i++) {
        printf("\nDigite o %dº número inteiro: \n", i+1);
        scanf("%d", &v[i]);
        for(j=1; j < v[i]; j++ ) {
            if(v[i] % j == 0) {
                divisor++;
            }
       }
       if(divisor == 2) {
            primo=1;
        }
        printf("\n\nPrimo: %d, v[%d]\n", v[i], i);

    }


    return 0;
}
