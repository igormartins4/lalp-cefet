/*
*************************************************************
*   Folha de Pagamento                                      *
*                                                           *
*   Autores: Igor Martins e Douglas Salustiano              *
*   Data: Junho de 2017                                     *
*   Trabalho Prático de Algoritmos e Lógica de Programação  *
*                                                           *
*************************************************************
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define num 3

using namespace std;

void Incluir_Professor();
void Pesquisar();
void Alterar_Titulo();
void Alterar_Horas();
void Excluir_Professor();
void Folha_Pagamentos();
void Menu();
int Sair();


struct PROFESSOR {
     int codigo;    // Código do professor
     char nome[40]; // Nome do professor
     char titulo;   // Titulação do professor
     int horas;     // Número de aulas/hora semanais
     float salario; //Salário bruto
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("title Controle de Professores - v1.0");

    cout << "\nSeja bem vindo ao sistema de controle de professores!" << endl;
    Menu();

    return 0;
}

void Incluir_Professor(PROFESSOR *prof) {

    int i;
    system("title 1 - Incluir novo professor");

    for(i=0; i < num; i++) {
        if(prof[i].codigo != 0) {
            cout << "\nIncluindo um professor: " << endl;
            cout << "\nCódigo: " << ends;
            cin >> prof[i].codigo;
            cout << "Nome: " << ends;
            cin >> prof[i].nome[40];
            fflush(stdin);
            cout << "Título: E(Especialista) " << endl;
            prof[i].titulo = 'E';
            cout << "Horas semanais: " << ends;
            cin >> prof[i].horas;

           prof[i].salario =  20.40 * prof[i].horas;

           cout.precision(2);
           cout << fixed << "Salário: R$" << prof[i].salario << endl;
           break;
        }
    }
    cout << "\n\nPressione qualquer tecla para voltar ao menu principal" << endl;
    fflush(stdin);
    getchar();
    system("cls");
    Menu();
}

void Pesquisar(PROFESSOR *prof) {
    int i, codigo;

    system("title 2 - Pesquisar dados de um professor");

    cout << "\nDigite o código do professor a ser pesquisado: " << ends;
    cin >> codigo;

    for(i=0; i < num; i++) {
        if(prof[i].codigo == codigo) {
            cout << "Nome: " << prof[i].nome[40] << endl;
            cout << "Título: " << prof[i].titulo << endl;
            cout << "Horas semanais: " << prof[i].horas;
            cout.precision(2);
            cout << fixed << "Salário: R$" << prof[i].salario << endl;
            break;
        }
        else {
            cout << "Professor não encontrado" << endl;
            break;
        }
    }
    cout << "\n\nPressione qualquer tecla para voltar ao menu principal" << endl;
    fflush(stdin);
    getchar();
    system("cls");
    Menu();
}

void Alterar_Titulo(PROFESSOR *prof) {
    int i, codigo;
    char newtit;

    system("title 3 - Alterar título de um professor");

    cout << "\nDigite o código do professor: " << ends;
    cin >> codigo;

    for(i=0; i < num; i++) {
        if(prof[i].codigo == codigo) {
            cout << "Título: " << prof[i].titulo << endl;
            cout << "E (Especialista)" << endl
                 << "M (Mestre)" << endl
                 << "D (Doutor)" << endl;
            cout << "Digite o novo Título: " << ends;
            cin >> newtit;
            if((prof[i].titulo == 'E' && newtit == 'M') ||
               (prof[i].titulo == 'E' && newtit == 'D') ||
               (prof[i].titulo == 'M' && newtit == 'D')) {
                    prof[i].titulo = newtit;
               }
            else {
                cout << "Alteração Inválida!" << endl;
                break;
            }
        }
        else {
            cout << "Código Inexistente!" << endl;
            break;
        }
    }
    cout << "\n\nPressione qualquer tecla para voltar ao menu principal" << endl;
    fflush(stdin);
    getchar();
    system("cls");
    Menu();
}

void Alterar_Horas(PROFESSOR *prof) {
    int i, codigo;
    int newhoras;

    system("title 4 - Alterar número de horas");

    cout << "\nDigite o código do professor: " << ends;
    cin >> codigo;

    for(i=0; i < num; i++) {
        if(prof[i].codigo == codigo) {
            cout << "Horais semanais: " << prof[i].horas << endl;
            cout << "Digite o novo número de horais semanais: " << ends;
            cin >> newhoras;
            prof[i].horas = newhoras;
        }
        else {
            cout << "Código Inexistente!" << endl;
            break;
        }
    }
    cout << "\n\nPressione qualquer tecla para voltar ao menu principal" << endl;
    fflush(stdin);
    getchar();
    system("cls");
    Menu();
}

void Excluir_Professor(PROFESSOR *prof) {
    int i, codigo;
    char apagar;

    system("title 5 - Excluir professor");

    cout << "\nDigite o código do professor: " << ends;
    cin >> codigo;

    for(i=0; i < num; i++) {
        if(prof[i].codigo == codigo) {
            cout << "Apagar " << prof[i].nome[40] << "? (S/N)" << endl;
            cin >> apagar;
            if((apagar == 'S') || (apagar == 's')) {
                prof[i].nome[40] = ' ';
                prof[i].titulo = ' ';
                prof[i].horas = ' ';
                prof[i].salario = ' ';
                break;
            }
        }
        else {
            cout << "Código Inexistente!" << endl;
            break;
        }
    }
    cout << "\n\nPressione qualquer tecla para voltar ao menu principal" << endl;
    fflush(stdin);
    getchar();
    system("cls");
    Menu();
}

void Folha_Pagamentos(PROFESSOR *prof) {
    int i;

    float salb, inss, ir, sall;

    system("title 6 - Imprimir folha de pagamento");

    cout << "\nImprimindo folha de pagamento da faculdade: " << endl;

    for(i=0; i < num; i++) {
        if(prof[i].codigo != 0) {
            if(prof[i].titulo == 'E') {
                salb = 20.40 * prof[i].horas * 4.5;
                inss = salb * 0.85;
                ir = (salb * 1.5) - inss;
                sall = salb - inss - ir;
             }

            if(prof[i].titulo == 'M') {
                salb = 31.20 * prof[i].horas * 4.5;
                inss = salb * 0.85;
                ir = (salb * 1.5) - inss;
                sall = salb - inss - ir;
             }

            if(prof[i].titulo == 'D') {
                salb = 42.80 * prof[i].horas * 4.5;
                inss = salb * 0.85;
                ir = (salb * 1.5) - inss;
                sall = salb - inss - ir;
             }

            cout << "\n\nCódigo: " << prof[i].codigo << endl;
            cout << "Nome: " << prof[i].nome[40] << endl;
            cout << "Título: " << prof[i].titulo << endl;
            cout << "Horas semanais: " << prof[i].horas << endl;
            cout.precision(2);
            cout << fixed << "Salário Bruto: R$ " << salb << endl;
            cout << fixed << "Valor descontado de INSS: R$ " << inss << endl;
            cout << fixed << "Valor descontado de Imposto de Renda: R$ " << ir << endl;
            cout << fixed << "Salário Líquido: R$ " << sall << endl;
        }

        cout << "\n\nPressione qualquer tecla para voltar ao menu principal" << endl;
        fflush(stdin);
        getchar();
        system("cls");
        Menu();
        }
}

void Menu() {
    struct PROFESSOR prof[num];
    int opcao;

    cout << "\nSelecione a opção desejada: \n" << endl
         << "   1 - Incluir novo professor " << endl
         << "   2 - Pesquisar dados de um professor " << endl
         << "   3 - Alterar título " << endl
         << "   4 - Alterar número de horas " << endl
         << "   5 - Excluir professor " << endl
         << "   6 - Imprimir folha de pagamento " << endl
         << "   0 - Sair \n" << endl;

    cin >> opcao;

    switch(opcao) {
        case 1:
            Incluir_Professor(prof);
            break;

        case 2:
            Pesquisar(prof);
            break;

        case 3:
            Alterar_Titulo(prof);
            break;

        case 4:
            Alterar_Horas(prof);
            break;

        case 5:
            Excluir_Professor(prof);
            break;

        case 6:
            Folha_Pagamentos(prof);
            break;

        case 0:
            Sair();
            break;

        default:
            cout <<"\aOpção Inválida!\n\n";
            Menu();
    }
}

int Sair() {
    cout << "Saindo..." << endl;
    return 0;
}
