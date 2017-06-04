#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float soma(float, float);
float sub(float, float);
float mult(float, float);
float divisao(float, float);

int main() {
    char opcao=1;
    float x, y;

    setlocale(LC_ALL, "Portuguese");
    while(opcao != 0) {
        printf("\nMenu de Opções: \n");
        printf("+      -       Adição \n");
        printf("-      -       Subtração \n");
        printf("*      -       Multiplicação \n");
        printf("/      -       Divisão \n");
        printf("0      -       Sair \n");
        printf("\n        Escolha uma opção -> \n");

        fflush(stdin);
        scanf("%c", &opcao);

        switch(opcao) {

            case '+':
                scanf("%f%f", &x, &y);
                system("cls");
                printf("\nResultado: %.2f \n", soma(x,y));
                break;

            case '-':
                scanf("%f%f", &x, &y);
                system("cls");
                printf("\nResultado: %.2f \n", sub(x,y));
                break;

            case '*':
                scanf("%f%f", &x, &y);
                system("cls");
                printf("\nResultado: %.2f \n", mult(x,y));
                break;

            case '/':
                scanf("%f%f", &x, &y);
                system("cls");
                printf("\nResultado: %.2f \n", divisao(x,y));
                break;

            case '0':
                printf("\nSaindo....\n");
                return 0;
                break;
        }
    }
}

float soma(float x, float y) {
    return x+y;
}

float sub(float x, float y) {
    return x-y;
}

float mult(float x, float y) {
    return x*y;
}

float divisao(float x, float y) {
    return x/y;
}
