#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int a[10], b[10], i, j;

    setlocale(LC_ALL, "Portuguese");
    for(i=0; i<10; i++) {
        printf("\nDigite o %dº número inteiro do vetor: \n", i+1);
        scanf("%d", &a[i]);
        if(i % 2 == 0) {
            b[i] = a[i+1];
        }
    }

    printf("\n");

    for(j=0; j<10; j++) {;
        printf("%d[%d]\n", b[j], j);
    }
    return 0;
}
