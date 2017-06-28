#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 10

int main() {

    FILE *arq;

    char nome;
    int i;

    setlocale(LC_ALL, "Portuguese");

    arq = fopen("cadastro.txt", "a");

    if(arq == NULL) {
        printf("\nERRO na abertura do arquivo!\n");
        system("color cf");
    }
    else {
        printf("\nDigite, respectivamente, o nome e o número da pessoa na mesma linha: \n");
        printf("\n(* para sair): \n\n");
        do {
            scanf("%c", &nome);
            fputc(nome, arq);
            //putchar("/n");

            if(ferror(arq)) {
                printf("\nERRO na gravação dos dados!\n");
                system("color cf");
            }
        }while(nome != '*');
    }

    if(fclose(arq)!= 0) {
        printf("\nERRO no fechamento do arquivo!\n");
        system("color cf");
    }
    return 0;
}
