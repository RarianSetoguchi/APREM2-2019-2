//3.Fa�a um programa que receba dois n�meros e mostre o menor.
//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descri��o: Lista 2 - Exerc�cio 3
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int inumero1 = 0;
    int inumero2 = 0;
    setlocale(LC_ALL,"");
    system("color 7E");

    cout << "primeiro numero: ";
    cin  >> inumero1;
    cout << endl;
    cout << "segundo numero: ";
    cin  >> inumero2;
    cout << endl;
    if (inumero1>inumero2)
        cout<<inumero1 <<" eh maior que " <<inumero2;
    else
        cout<<inumero2 <<" eh maior que " <<inumero1;
}
