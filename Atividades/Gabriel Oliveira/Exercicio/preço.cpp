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
    int ipreco = 0;
    int ivalor = 0;
    int ivalort = 0;

    cout << "preco do produto:        ";
    cin >> ipreco;
    cout << "preco atual:              ";
    ivalor = ipreco/10;
    ivalort = ipreco-ivalor;
    cout << ivalort;


}
