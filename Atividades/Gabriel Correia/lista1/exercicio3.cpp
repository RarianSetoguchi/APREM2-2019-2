//3. Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
//segundo. sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
//com validações.
//**********************************************************

//- Autor: Gabriel Correia Soares

//- Descrição: Lista 1 - Exercício 3

//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int ip = 0;
    int iseg = 0;

    setlocale(LC_ALL,"");
    system("color 7E");
    cout << "PROGRAMA DE Gabriel Correia Soares; Curso de engenharia mecânica; IFSP-SJC";
    cout <<endl;
    cout << "primeiro numero: ";
    cin  >>ip;
    cout <<endl;
    cout << "segundo numero: ";
    cin  >>iseg;
    cout <<endl;
    cout <<"resultado:"
         <<ip/iseg
         <<"."
         << endl;
}
