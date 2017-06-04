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
        printf("\n\nMenu de Opções: \n");
        printf("1      -       Quadrado \n");
        printf("2      -       Retângulo \n");
        printf("3      -       Triângulo \n");
        printf("4      -       Círculo \n");
        printf("5      -       Sair \n");
        printf("\n        Escolha uma opção -> \n");

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
    printf("Área do Quadrado: %.2f", area);

    return;
}

void retangulo() {
    float x, y, area;
    printf("\nInforme o largura e altura do retângulo\n");
    scanf("%f%f", &x, &y);
    area = x * y;
    printf("Área do Retângulo: %.2f \n", area);

    return;
}

void circulo() {
    float x, area;
    printf("\nInforme o raio do círculo\n");
    scanf("%f", &x);
    area = 3.14 * (x * x);
    printf("Área do Círculo (Pi=3,14): %.2f \n", area);
}

void triangulo() {
    float x, y, area;
    printf("\nInforme a base e a altura do triângulo\n");
    scanf("%f%f", &x, &y);
    area = (x * y) / 2;
    printf("Área do Triângulo: %.2f \n", area);
}
