//Exercicio 1: Fa�a um programa que receba dois n�meros, calcule e mostre a subtra��o do primeiro n�mero pelo segundo.
//**********************************************************

//- Autor: Gabriel Correia Soares

//- Descri��o: Lista 1 - Exerc�cio 4

//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int ipe = 0;
    int ise = 0;
    int iseg = 0;
    int ip = 0;
    int ipeso1 =0;
    int ipeso2 = 0;
    setlocale(LC_ALL,"");
    system("color 7E");
    cout << "PROGRAMA DE Gabriel Correia Soares; Curso de engenharia mec�nica; IFSP-SJC";
    cout <<endl;
    cout << "primeira nota: ";
    cin  >>ip;
    cout <<endl;
    cout<< "insira o peso dessa nota: ";
    cin  >>ipeso1;
    cout <<endl;
    ipe = ip*ipeso1;
    cout << "segunda nota: ";
    cin  >>iseg;
    cout <<endl;
    cout<< "insira o peso dessa nota: ";
    cin  >>ipeso2;
    cout <<endl;

    ise = iseg*ipeso2;
    cout <<"resultado:"
         << (ise+ipe)/(ipeso1+ipeso2)
         <<"."
         << endl;
}
