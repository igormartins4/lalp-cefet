#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void quadrado();
void retangulo();
void circulo();
void triangulo();

int main() {
    int opcao=6;

    setlocale(LC_ALL, "Portuguese");
    while(opcao != 5) {
        printf("\n\nMenu de Op��es: \n");
        printf("1      -       Quadrado \n");
        printf("2      -       Ret�ngulo \n");
        printf("3      -       Tri�ngulo \n");
        printf("4      -       C�rculo \n");
        printf("5      -       Sair \n");
        printf("\n        Escolha uma op��o -> \n");

        fflush(stdin);
        scanf("%c", &opcao);

        switch(opcao) {

            case '1':
                system("cls");
                quadrado();
                break;

            case '2':
                system("cls");
                retangulo();
                break;

            case '3':
                system("cls");
                triangulo();
                break;

            case '4':
                system("cls");
                circulo();
                break;

            case '5':
                printf("\nSaindo....\n");
                return 0;
                break;
        }
    }
}

void quadrado() {
    float x, area;
    printf("\nInforme o largura ou altura do quadrado\n");
    scanf("%f", &x);
    area = x * x;
    printf("�rea do Quadrado: %.2f", area);

    return;
}

void retangulo() {
    float x, y, area;
    printf("\nInforme o largura e altura do ret�ngulo\n");
    scanf("%f%f", &x, &y);
    area = x * y;
    printf("�rea do Ret�ngulo: %.2f \n", area);

    return;
}

void circulo() {
    float x, area;
    printf("\nInforme o raio do c�rculo\n");
    scanf("%f", &x);
    area = 3.14 * (x * x);
    printf("�rea do C�rculo (Pi=3,14): %.2f \n", area);
}

void triangulo() {
    float x, y, area;
    printf("\nInforme a base e a altura do tri�ngulo\n");
    scanf("%f%f", &x, &y);
    area = (x * y) / 2;
    printf("�rea do Tri�ngulo: %.2f \n", area);
}
