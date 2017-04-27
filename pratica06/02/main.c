#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int a[10], b[10], c[20], i, j, k;

    setlocale(LC_ALL, "Portuguese");
    for(i=0; i<10; i++) {
        printf("\nDigite o %dº número inteiro do primeiro vetor: \n", i+1);
        scanf("%d", &a[i]);
        c[2*i] = a[i];
    }
    for(j=0; j<10; j++) {
        printf("\nDigite o %dº número inteiro do segundo vetor: \n", j+1);
        scanf("%d", &b[j]);
        c[2*j+1] = b[j];
    }

    for(k=0; k<20; k++) {;
        printf("%d\n", c[k]);
    }
    return 0;
}
