//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descri��o: Lista 1 - Exerc�cio 8
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int ipeso = 0;


    setlocale(LC_ALL,"");
    system("color 7E");
    cout << "PROGRAMA DE Gabriel Correia Soares; Curso de engenharia mec�nica; IFSP-SJC";
    cout <<endl;
    cout << "insira o seu peso atual: ";
    cin  >>ipeso;
    cout <<endl;
    cout << "seu peso atual em gramas e: " <<ipeso*1000<<"g."<<endl;

}
