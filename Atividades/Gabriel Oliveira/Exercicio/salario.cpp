/**********************************************************
- Autor: Gabriel Guimar�es
- Descri��o: Lista 1 - Exerc�cio 5
**********************************************************/



#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()

{
    int isal = 0;
    int ivendas = 0;
    int isaltotal = 0;

    cout << "salario do funcionario:      ";
    cin >> isal;
    cout << "quanto vendeu:               ";
    cin >> ivendas;

    isaltotal = (400/ivendas)+isal;

    cout << "salario total de:            ";
    cout << isaltotal;

}
