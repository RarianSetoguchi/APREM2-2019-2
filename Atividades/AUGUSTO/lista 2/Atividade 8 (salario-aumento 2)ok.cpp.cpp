/**********************************************************
- Autor:Augusto Nogueira Almeida
- Descricao: salario 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
int isalario=0;

cout<<" digite o salario";
cin>> isalario;


if  (isalario<=300)
    { cout<< " seu novo salario e de" << (isalario+(isalario*(0.35)))
         << endl;
    }

    if  (isalario>300)
    { cout<< " seu novo salario e de" << (isalario+(isalario*(0.15)))
         << endl;
    }


}
