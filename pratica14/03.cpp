#include <bits/stdc++.h>

using namespace std;
struct RELATORIO{
    char nome[20];
    float media;
    int faltas;
};

int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *aprov,*reprov;
    reprov = fopen("reprovados.bin","rb");
    aprov = fopen("aprovados.bin","rb");
    struct RELATORIO r;
    cout << "Aprovados: ";
    while(fread(&r,sizeof(struct RELATORIO),1,reprov)){
        cout << endl << r.nome << endl ;
        cout << "Média: " <<r.media << endl ;
        cout << "Faltas: " << r.faltas << endl ;
    };
    cout << endl;
    cout << "Reprovados: ";
    while(fread(&r,sizeof(struct RELATORIO),1,aprov)){
        cout << endl << r.nome << endl ;
        cout << "Média: " <<r.media << endl ;
        cout << "Faltas: " <<  r.faltas << endl ;
    }
    fclose(aprov);
    fclose(reprov);
    return 0;
}
