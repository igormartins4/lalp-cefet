#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int idade[100], home=0, mulh=0, idadeh=0, i=0;
    float peso[100], medih=0, medm=0, pesom=0;
    char sexo;

    setlocale(LC_ALL, "Portuguese");
    inicio:
    for(i=0; i<100; i++) {
        printf("\nDigite respectivamente sua idade, peso, e sexo (F ou M):\n\n");
        scanf("%d%f", &idade[i], &peso[i]);
        fflush(stdin);
        scanf("%s", &sexo);
        if(sexo == 'M' || sexo == 'm') {
            home++;
            idadeh += idade[i];
        }
        else if (sexo == 'F' || sexo == 'f') {
            mulh++;
            pesom = pesom + peso[i];
        }

        else {
            printf("\nSEXO INVÁLIDO!!\n");
            goto inicio;
        }
    }
    medih = idadeh / home;
    medm = pesom / mulh;

    printf("\nTotal de homens: \t%d\n", home);
    printf("\nTotal de mulheres: \t%d\n", mulh);
    printf("\nMédia das idades dos homes: \t%.2f\n", medih);
    printf("\nMédia dos pesos das mulheres: \t%.2f\n", medm);

    return 0;
}
