//Exercicio 1: Fa�a um programa que receba dois n�meros, calcule e mostre a subtra��o do primeiro n�mero pelo segundo.
//**********************************************************

//- Autor: Gabriel Correia Soares

//- Descri��o: Lista 1 - Exerc�cio 2

//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int ip = 0;
    int is = 0;
    int it = 0;
    int iresultado = 0;
    setlocale(LC_ALL,"");
    system("color 7E");

    cout << "primeiro numero: ";
    cin  >>ip;
    cout <<endl;

    cout << "segundo numero: ";
    cin  >>is;
    cout <<endl;

    cout << "terceiro numero: ";
    cin  >>it;
    cout <<endl;



    iresultado = ip*is*it;
    cout <<"resultado:"
         <<iresultado
         <<"."
         << endl;
}
