/*
*********************************************************
*                                                       *
*   Autor: Igor Martins                                 *
*   Data: Abril de 2017                                 *
*   https://github.com/igormartins4                     *
*   Laboratório de Algoritmos e Lógica de Programação   *
*                                                       *
*********************************************************
*/

#include <iostream>
#include <locale.h>
#define linha 5
#define coluna 5

using namespace std;

int main() {
    int a[linha][coluna], l, soma=0;

    setlocale(LC_ALL, "Portuguese");
    cout << "\nDigite a linha a ser somada" << endl;
    cin >> l;
    for(int i=0; i<linha; i++) {
        cout << "\nDigite os valores da matriz" << endl;
        for(int j=0; j<coluna; j++) {
            cin >> a[i][j];
            if(i==l) {
                soma += a[i][j];
            }
        }
    }
    cout << endl;
    for(int i=0; i<linha; i++) {
        for(int j=0; j<coluna; j++) {
            cout << a[i][j] << ends;
        }
        cout << endl;
    }

    cout << endl;

    cout << "Soma = " << soma << endl;


    return 0;
}
