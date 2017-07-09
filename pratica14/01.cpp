#include <bits/stdc++.h>

using namespace std;

struct Aluno {
    char nome[20];
    float notas[4];
    int faltas;
};

int main()
{
    FILE *arq;
    struct Aluno a;
    int i;
    arq = fopen("diario.bin","rb");
    if(arq == NULL){
        cout << "Deu ruim pazero";
    }else{
        while(fread(&a,sizeof(a),1,arq) != 0){
            cout << a.nome << endl;
            for( i=0; i<4; i++ ){
                cout << a.notas[i] << endl;
            }
            cout << "Faltas: " << a.faltas << endl;
        }
    }
    fclose(arq);
    return 0;
}
