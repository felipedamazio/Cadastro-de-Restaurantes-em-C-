#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<string>
#include<cstring>
#include<sstream>

#include "funcoes.cpp"


using namespace std;

int opc,cont2;
int total;


int main ()
{
    cabecalho();

    do
    {

        cout <<"\n\n********* MENU ************ \n\n";

        cout <<"1- INSERIR UM NOVO RESTAURANTE\n";
        cout <<"2- EXBIR UM RESTAURANTE ESPECIFICO\n";
        cout <<"3- LISTAR TODOS OS RESTAURANTES\n";
        cout <<"4- ESCOLHER RESTAURANTE POR NOTA MINIMA\n";
        cout <<"5- ESCOLHER RESTAURANTE PELA COMIDA\n";
        cout <<"6- ALTERAR DADOS DE UM RESTAURANTE\n";
        cout <<"7- SAIR\n";

        cout <<"\nESCOLHA UMA OPCAO:\n\n";
        
        cin>> opc ;

        switch(opc)
        {

        case 1:
            inserirNovo(&cont2,restaurante);
            break;
        case 2:
            exibirUm(&cont2,restaurante);
            break;
        case 3:
            exibirTodos(&cont2,restaurante);
            break;
        case 4:
            escolherPorNota(&cont2,restaurante);
            break;
        case 5:
            escolherPorComida(&cont2,restaurante);
            break;
        case 6:
            alterarDados(&cont2,restaurante);
            break;
        case 7:
            sair();
            break;
        default:
            cout<<"OPCAO INVALIDA\n";
            break;
        }
    }
    while(opc!=7);
    system("pause");
    return 0;
}
