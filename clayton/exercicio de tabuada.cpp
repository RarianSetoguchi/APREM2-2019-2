/**********************************************************
- Autor:     clayton
- Descrição: tabuada exercício 13
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
        int iNumero = 0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa

    cout << " Digite o número da tabuada que gostaria de ver: ";
    cin >> iNumero;
    cout << "A tabuada desse número é: ";
    cout << endl;
    cout << iNumero * 0;
    cout << endl;
    cout << iNumero*1;
    cout << endl;
    cout << iNumero*2;
    cout << endl;
    cout << iNumero*3;
    cout << endl;
    cout << iNumero*4;
    cout << endl;
    cout << iNumero*5;
    cout << endl;
    cout << iNumero*6;
    cout << endl;
    cout << iNumero*7;
    cout << endl;
    cout << iNumero*8;
    cout << endl;
    cout << iNumero*9;
    cout << endl;
    cout << iNumero*10;
    cout << endl;
    return 0;

}
