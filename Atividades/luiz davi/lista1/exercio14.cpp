/**********************************************************
- Autor:     Luiz Davi
- Descri��o: Lista 01: Exerc�cio 14
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
   int iNascimento = 0;
   int iAnoatual = 0;
    int iAno = 0;
    int iMeses = 0;
    int iDias = 0;
    int iSemanas = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o seu ano de nascimento: ";
    cin >> iNascimento;

    cout << "Digite o ano atual: ";
    cin >> iAnoatual;

    iAno = iAnoatual-iNascimento;

    cout << "Sua idade �: " << iAno << endl;

    iMeses = iAno*12;

    cout << "Sua idade em meses �: " << iMeses << endl;

    iDias = iAno*365;

    cout << "Sua idade em dias �: " << iDias << endl;

    iSemanas = iAno*52;

    cout << "Sua idade em semana �: " << iSemanas;



    return 0;
}
