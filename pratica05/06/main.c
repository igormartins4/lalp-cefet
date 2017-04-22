#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float nota, maior=0, menor=10000000, i=0;

    setlocale(LC_ALL, "Portuguese");
    do {
        i++;
        printf("\nDigite a %.0fº nota (-1 para parar):\n", i);
        scanf("%f", &nota);
        if(nota>maior && nota != -1) {
            maior = nota;
        }
        else if(nota<menor && nota != -1) {
            menor = nota;
        }

    } while(nota != -1);

    printf("\nMaior nota da turma: %.2f\n", maior);
    printf("\nMenor nota da turma: %.2f\n", menor);

    return 0;
}
