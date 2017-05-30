/*
*********************************************************
*                                                       *
*   Autor: Igor Martins                                 *
*   Data: Maio de 2017                                 *
*   https://github.com/igormartins4                     *
*   Laboratório de Algoritmos e Lógica de Programação   *
*                                                       *
*********************************************************
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define num 50

struct alunos {
    char nome[50];
    float nota1, nota2, nota3, nota4;
    int faltas;
};

int main() {
    struct alunos aluno[num];
    int i, j;
    float media=0;

    setlocale(LC_ALL, "Portuguese");

    for(i=0; i<num; i++) {
        printf("\nDigite o nome do %dº aluno: \n", i+1);
        fflush(stdin);
        __fpurge(stdin); //fflush do Linux, retirar caso for testar no Windows
        gets(aluno[i].nome);
        printf("\nDigite as quatro notas: \n");
        scanf("%f", &aluno[i].nota1);
        scanf("%f", &aluno[i].nota2);
        scanf("%f", &aluno[i].nota3);
        scanf("%f", &aluno[i].nota4);
        printf("\nDigite o número de faltas: \n");
        scanf("%d", &aluno[i].faltas);

        media =  (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3 + aluno[i].nota4) / 4;

        printf("\nNome: %s\n", aluno[i].nome);
        printf("Média: %2.f\n", media);

        if ((media >= 6) && (aluno[i].faltas <= 20)) {
            printf("Aluno Aprovado.\n");
        }
        else {
             printf("\nAluno Reprovado.\n");
        }
        printf("\n");
    }

    return 0;
}
