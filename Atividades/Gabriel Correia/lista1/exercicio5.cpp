//Exercicio 1: Fa�a um programa que receba dois n�meros, calcule e mostre a subtra��o do primeiro n�mero pelo segundo.
//**********************************************************

//- Autor: Gabriel Correia Soares

//- Descri��o: Lista 1 - Exerc�cio 5

//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int ip = 0;
    int iseg = 0;
    int itotal =0;

    setlocale(LC_ALL,"");
    system("color 7E");
    cout << "PROGRAMA DE Gabriel Correia Soares; Curso de engenharia mec�nica; IFSP-SJC";
    cout <<endl;
    cout << "pre�o da gasolina: ";
    cin  >>ip;
    cout <<endl;
    itotal=(ip*10)/100;
    cout <<"resultado:"
         << ip-itotal
         <<"."
         << endl;
}

