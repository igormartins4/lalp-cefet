#include <bits/stdc++.h>

using namespace std;

struct RELATORIO {
    char nome[20];
    float media;
    int faltas;
};
struct Aluno {
    char nome[20];
    float notas[4];
    int faltas;
};
int main()
{
    setlocale(LC_ALL,"Portuguese");
    FILE *arq,*aprov,*reprov;
    arq = fopen("diario.bin","rb");
    aprov = fopen("aprovados.bin","wb");
    reprov = fopen("reprovados.bin","wb");
    struct RELATORIO r;
    struct Aluno a;
    float na[4],soma=0,media=0;
    int i;
    if(arq == NULL || reprov == NULL || aprov == NULL){
        cout << "Deu ruim berg";
    }else{
        while(fread(&a,sizeof(struct Aluno),1,arq) != 0){
            strcpy(r.nome,a.nome);
            media = 0;
            soma = 0;
            for(i=0;i<4;i++){
                na[i] = a.notas[i];
                soma += na[i];
            }
            media = soma / 4;
            r.media = media;
            r.faltas = a.faltas;

            if(r.media>=6 && r.faltas<=20){
                fwrite(&r,sizeof(struct RELATORIO),1,aprov);
            }else{
                fwrite(&r,sizeof(struct RELATORIO),1,reprov);
            }
        }
    }
    fclose(arq);
    fclose(aprov);
    fclose(reprov);
    return 0;
}
