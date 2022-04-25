#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <conio.h>
#define N 100

using namespace std;

struct cadastro
{
    string nome[N], tipoComida[N], endereco[N];
    double nota[N], cont = 0;
};

cadastro restaurante[N];

void inserirNovo(int *cont, cadastro restaurante[N])
{

    char op;

    do
    {

        cout << "\nDIGITE O NOME DO RESTAURANTE: ";
        cin.ignore();
        getline(cin, restaurante[*cont].nome[*cont]);
        fflush(stdin);
        cout << "\nDIGITE O ENDERECO DO RESTAURANTE:\n";
        getline(cin, restaurante[*cont].endereco[*cont]);
        fflush(stdin);
        cout << "\nDIGITE O TIPO DE COMIDA  :\n";
        getline(cin, restaurante[*cont].tipoComida[*cont]);
        fflush(stdin);
        cout << "\nDIGITE UMA NOTA PARA O RESTAURANTE :\n";
        cin >> restaurante[*cont].nota[*cont];
        ++*cont;
        cout << "\n\tDESEJA CONTINUAR O CADASTRO OU VOLTAR AO MENU.\n DIGITE 'C' PARA CONTINUAR OU 'V' PARA VOLTAR AO MENU\n\n:";
        cin >> op;

    } while (op != 'v');
}

void exibirUm(int *cont, cadastro pessoa[N])

{

    int encontrado = 0;
    string exibirNome;

    cout << "_____________________________________________________\n\n";
    cout << "ESCOLHA DE RESTAURANTE ESPECIFICO";
    cout << "\n_____________________________________________________\n\n";

    cout << "DIGITE O NOME A SER PESQUISADO\n:";
    cin.ignore();
    getline(cin, exibirNome);
    fflush(stdin);

    for (int i = 0; i < *cont; i++)
    {

        if (exibirNome == restaurante[i].nome[i])
        {

            cout << "\nCADASTRO ATUAL ENCONTRADO DE "<<exibirNome;
            cout << "\n\nNOME:" << restaurante[i].nome[i] << endl;
            cout << "ENDERECO:" << restaurante[i].endereco[i] << endl;
            cout << "TIPO DE COMIDA:" << restaurante[i].tipoComida[i] << endl;
            cout << "NOTA DO RESTAURANTE:" << restaurante[i].nota[i] << endl;
            cout << "\n"
                 << endl;

            encontrado = 1;
            break;
        }
    }
    if (encontrado != 1)
    {
        cout << " nao encontrado. Tente novamente." << endl;
        cout << endl;
    }
}

void exibirTodos(int *cont, cadastro restaurante[N])

{
    cout << "\nTODOS OS RESTAURANTES CADASTRADOS !\n\n";

    for (int i = 0; i < *cont; i++)
    {

        cout << "NOME:" << restaurante[i].nome[i] << endl;
        cout << "ENDERECO:" << restaurante[i].endereco[i] << endl;
        cout << "TIPO DE COMIDA:" << restaurante[i].tipoComida[i] << endl;
        cout << "NOTA DO RESTAURANTE:" << restaurante[i].nota[i] << endl;
        cout << "\n\n"
             << endl;
    }
}

void escolherPorComida(int *cont, cadastro restaurante[N])
{

    cout << "_____________________________________________________\n\n";
    cout << "ESCOLHA DE RESTAURANTE POR COMIDA";
    cout << "\n_____________________________________________________\n\n";

    string comidaDesejada;

    cout << "\nDIGITE A COMIDA DESEJADA\n:  ";
    cin.ignore();
    getline(cin, comidaDesejada);
    fflush(stdin);
    for (int i = 0; i < *cont; i++)
    {
           
        if (comidaDesejada == restaurante[i].tipoComida[i])
        {
            cout << "\nTODOS OS RESTAURANTES DE "<< comidaDesejada;
            cout << "\n\nNOME:" << restaurante[i].nome[i] << endl;
            cout << "ENDERECO:" << restaurante[i].endereco[i] << endl;
            cout << "TIPO DE COMIDA:" << restaurante[i].tipoComida[i] << endl;
            cout << "NOTA DO RESTAURANTE:" << restaurante[i].nota[i] << endl;
            cout << "\n\n"
                 << endl;
        }
    }
}

void escolherPorNota(int *cont, cadastro restaurante[N])
{

    double notaDesejada;

    cout << "_____________________________________________________\n\n";
    cout << "ESCOLHA DE RESTAURANTE POR NOTA";
    cout << "\n_____________________________________________________\n\n";

    cout << "DIGITE A NOTA DE AVALIACAO PRETENDIDA\n:  ";
    cin >> notaDesejada;
    fflush(stdin);
    for (int i = 0; i < *cont; i++)
    {

        if (restaurante[i].nota[i] >= notaDesejada)
        {  
            cout << "\nRESTAURANTES COM NOTA MAIOR OU IGUAL A " << notaDesejada;

            cout << "\n\nNOME:" << restaurante[i].nome[i] << endl;
            cout << "ENDERECO:" << restaurante[i].endereco[i] << endl;
            cout << "TIPO DE COMIDA:" << restaurante[i].tipoComida[i] << endl;
            cout << "NOTA DO RESTAURANTE:" << restaurante[i].nota[i] << endl;
            cout << "\n\n"
                 << endl;
        }
    }
}

void alterarDados(int *cont, cadastro restaurante[])
{
    string alterar;
    char alternativa;

    cout << "DIGITE QUAL RESTAURANTE DESEJA ALTERAR:\n\n  ";
    cin.ignore();
    getline(cin, alterar);
    for (int i = 0; i < *cont; i++)
    {

        if (alterar == restaurante[i].nome[i])
        {

            cout << "    \n\n DADOS ATUAIS DO RESTAURANTE:" << alterar;

            cout << "\n\nNOME:" << restaurante[i].nome[i] << endl;
            cout << "ENDERECO:" << restaurante[i].endereco[i] << endl;
            cout << "TIPO DE COMIDA:" << restaurante[i].tipoComida[i] << endl;
            cout << "NOTA DO RESTAURANTE:" << restaurante[i].nota[i] << endl;
            cout << "\n"
                 << endl;

            cout << "_____________________________________________________\n\n";
            cout << "ALTERAR DE DADOS";
            cout << "\n_____________________________________________________\n\n";

            cout << "DIGITE O NOVO NOME DO RESTAURANTE: ";
            getline(cin, restaurante[i].nome[i]);
            fflush(stdin);
            cout << "\nDIGITE O NOVO ENDERECO DO RESTAURANTE:\n";
            getline(cin, restaurante[i].endereco[i]);
            fflush(stdin);
            cout << "\nDIGITE O NOVO TIPO DE COMIDA  :\n";
            getline(cin, restaurante[i].tipoComida[i]);
            fflush(stdin);
            cout << "\nDIGITE UMA NOVA  NOTA PARA O RESTAURANTE :\n";
            cin >> restaurante[i].nota[i];
        }

        cout << endl
             << "TEM CERTEZA QUE DESEJA ALTERAR ?| 's' PARA SIM 'n' PARA NAO" << endl;
        cin >> alternativa;

        if (alternativa == 's' || alternativa == 'S')
        {

            cout << "DADOS DO " + alterar + " ATUALIZADOS COM SUCESSO!\n\n";

            cout << "NOME:" << restaurante[i].nome[i] << endl;
            cout << "ENDERECO:" << restaurante[i].endereco[i] << endl;
            cout << "TIPO DE COMIDA:" << restaurante[i].tipoComida[i] << endl;
            cout << "NOTA DO RESTAURANTE:" << restaurante[i].nota[i] << endl;
            cout << "\n"
                 << endl;
        }
        else
        {

            cout << "     DADOS ATUAIS DO RESTAURANTE " + alterar + " FORAM MANTIDOS:\n\n"
                 << endl;

            cout << "NOME:" << restaurante[i].nome[i] << endl;
            cout << "ENDERECO:" << restaurante[i].endereco[i] << endl;
            cout << "TIPO DE COMIDA" << restaurante[i].tipoComida[i] << endl;
            cout << "NOTA DO RESTAURANTE:" << restaurante[i].nota[i] << endl;
            cout << "\n"
                 << endl;
        }
    }
}

void cabecalho()
{
    cout << "_____________________________________________________\n";
    cout << "\nCADASTRO DIGITAL DE RESTAURANTES MIXFOODS ";
    cout << "\nCreated By Felipe Damazio Fernandes Franco";
    cout << "\n_____________________________________________________\n\n";

    cout << "\nCADASTRE SEU RESTAURANTE EM NOSSO SISTEMA!";

    cout << "\n\n\t\t|";
    cout << "\n\t\t|";
    cout << "\n\t\t|";
    cout << "\n\t\t|";
    cout << "\n\t\tV";
}

void sair()
{
    cout << "\n OBRIGADO POR VISITAR\n\n ";
}
