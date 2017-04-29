/*
*********************************************************
*                                                       *
*   Autor: Igor Martins                                 *
*   Data: Março de 2017                                 *
*   https://github.com/igormartins4                     *
*   Laboratório de Algoritmos e Lógica de Programação   *
*                                                       *
*********************************************************
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

   int meninos, meninas, total;

   setlocale(LC_ALL, "Portuguese");
   printf("\nInforme o total das idades: \n");
   scanf("%d", &total);

   total = meninos + meninas;
   meninas = total / 3;
   meninos = meninas * 2;

   printf("\nIdade total dos alunos: %d\n", meninos);
   printf("Idade total das alunas: %d\n", meninas);

   return 0;
}
