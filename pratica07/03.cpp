#include <iostream>
#include <locale.h>
#define linha 3
#define coluna 3

using namespace std;

int main() {
    int a[linha][coluna], b[linha][coluna];

    setlocale(LC_ALL, "Portuguese");
    for(int i=0; i<linha; i++) {
        cout << "\nDigite os valores da matriz" << endl;
        for(int j=0; j<coluna; j++) {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }

    cout << endl;

    for(int i=0; i<linha; i++) {
        for(int j=0; j<coluna; j++) {
            if(i%2 == 0) {
                cout << b[i][j] +1 << ends;
            }
            else {
                cout << b[i][j] -1 << ends;
            }
        }
        cout << endl;
    }

    return 0;
}
