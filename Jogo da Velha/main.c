/*************************************************************
*                                                            *
*   Autor: Igor Martins                                      *
*   Data: Maio de 2017                                       *
*   https://github.com/igormartins4                          *
*   Trabalho Prático de Algoritmos e Lógica de Programação   *
*                                                            *
*************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define linha 3
#define coluna 3

char tabuleiro[linha][coluna];
char j1, j2;
int ganhou = 1;
int jogada = 0;
int vez = 1;
int certo = 1;
int i, j;

void escreve_matriz() {
    printf("\n\n");
    printf("\t 0   1   2\n\n");
    printf(" 0\t %c | %c | %c\n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("\t---|---|---\n");
    printf(" 1\t %c | %c | %c\n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("\t---|---|---\n");
    printf(" 2\t %c | %c | %c\n\n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
}

int jogadas() {
    certo = 1;
    if(vez == 1) {
        while (certo == 1) {
            printf("\nJogador 1, escolha a coordenada de sua jogada (Exemplo: 0 1):  ");
            scanf("%d%d", &i, &j);

            if(tabuleiro[i][j] == ' ') {
                tabuleiro[i][j] = j1;
                certo = 0;
                vez = 2;

                escreve_matriz();
            }
            else
                printf("\nJogada Inválida!\n");
        }
    }
    else {
        certo = 1;
        while (certo == 1) {
            printf("\nJogador 2, escolha a coordenada de sua jogada (Exemplo: 0 1):  ");
            scanf("%d%d", &i, &j);

            if(tabuleiro[i][j] == ' ') {
                tabuleiro[i][j] = j2;
                certo = 0;
                vez = 1;

                escreve_matriz();
            }
            else
                printf("\nJogada Inválida!\n");
        }
    }
}

void verifica_ganhador() {
	// teste na horizontal
	if((tabuleiro[0][0] == tabuleiro[0][1]) && (tabuleiro[0][1] == tabuleiro[0][2]) && (tabuleiro[0][0] !=' ')) {
		ganhou = 0;
	}

	else if((tabuleiro[1][0] == tabuleiro[1][1]) && (tabuleiro[1][1] == tabuleiro[1][2]) && (tabuleiro[1][0] != ' ')) {
		ganhou = 0;
	}

	else if((tabuleiro[2][0] == tabuleiro[2][1]) && (tabuleiro[2][1] == tabuleiro[2][2]) && (tabuleiro[2][0] !=' ')) {
		ganhou = 0;
	}

	// teste na vertical
	if((tabuleiro[0][0] == tabuleiro[1][0]) && (tabuleiro[1][0] == tabuleiro[2][0]) && (tabuleiro[0][0] !=' ')) {
		ganhou = 0;
	}

	else if((tabuleiro[0][1] == tabuleiro[1][1]) && (tabuleiro[1][1] == tabuleiro[2][1]) && (tabuleiro[0][1] !=' ')) {
		ganhou = 0;
	}

	else if((tabuleiro[0][2] == tabuleiro[1][2]) && (tabuleiro[1][2] == tabuleiro[2][2]) && (tabuleiro[0][2] !=' ')) {
		ganhou = 0;
	}

	//teste na diagonal
	 if((tabuleiro[0][0] == tabuleiro[1][1]) && (tabuleiro[1][1] == tabuleiro[2][2]) && (tabuleiro[0][0] !=' ')) {
	 	ganhou = 0;
	 }

	 else if((tabuleiro[0][2] == tabuleiro[1][1]) && (tabuleiro[1][1] == tabuleiro[2][0]) && (tabuleiro[0][2] !=' ')) {
	 	ganhou = 0;
	 }
}

int main() {

    int certo = 1;

    setlocale(LC_ALL, "Portuguese");
	while (certo == 1) {
			printf("\nJogador 1, escolha 'X' ou 'O':  ");
			scanf("%c", &j1);

			if ((j1 == 'X') || (j1 == 'x')) {
				j1 = 'X';
				j2 ='O';
				certo = 0;
			}
			else if ((j1 == 'o') || (j1 == 'O')) {
				j1 = 'O';
				j2 = 'X';
				certo = 0;
			}
			else {
                system("cls");
				printf("\nVocê digitou um valor inválido!!\n");
				certo = 1;
			}
	}
	printf("\nJogador 1 escolheu %c \n", j1);
	printf("Jogador 2 escolheu %c \n", j2);

	for(i=0; i < linha; i++) {
        for(j=0; j < coluna; j++) {
            tabuleiro[i][j] = ' ';
        }
	}

	escreve_matriz();
	jogada = 0;

	while ((jogada <= 9) && (ganhou == 1)) {
        jogadas();
        jogada++;
        verifica_ganhador();
	}

	if((ganhou == 0) && (jogada == 9)) {
        printf("\nJogo empatado, deu velha!\n");
	}

	else {
        if(ganhou == 0) {
            if(vez == 1) {
                printf("\nJogador 2 venceu!\n");
            }
            else if(vez == 2) {
                printf("\nJogador 1 venceu!\n");
            }
        }
	}
}
