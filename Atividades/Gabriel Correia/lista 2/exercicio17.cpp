//17. Fa�a um programa que verifique a validade de uma senha fornecida pelo usu�rio. A senha � 4531. O
//programa deve mostrar uma mensagem de permiss�o de acesso ou n�o.
//**********************************************************
//- Autor: Gabriel Correia Soares
//- Descri��o: Lista 2 - Exerc�cio 5
//**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    float inumero1 = 0;
 //   int isenha = 4531;
    setlocale(LC_ALL,"");
    system("color 7E");

    cout << "digite a sua senha: ";
    cin  >> inumero1;
    cout << endl;

    if (inumero1==4531)
       {cout<<"acesso concediido";}
    else
        {cout<<"acesso negado";}
}
