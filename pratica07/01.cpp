#include <iostream>
#include <locale.h>
#define linha 4
#define coluna 4

using namespace std;

int main() {
    int a[linha][coluna], soma=0;

    setlocale(LC_ALL, "Portuguese");
    for(int i=0; i<linha; i++) {
        cout << "\nDigite os valores da matriz" << endl;
        for(int j=0; j<coluna; j++) {
            cin >> a[i][j];
        }
        soma += a[i][i];
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
