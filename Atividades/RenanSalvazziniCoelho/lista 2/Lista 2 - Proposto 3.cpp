/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Lista 2 - Proposto 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fnumero1 = 0;
    float fnumero2 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite um n�mero: ";
    cin >> fnumero1;
    cout << "Digite outro n�mero: ";
    cin >> fnumero2;


    if   (fnumero1 < fnumero2)
    {
        cout << " O n�mero  "
            << fnumero1
            << " � menor que o n�mero "
            << fnumero2
             <<endl;
    }
    else
      {
        cout << " O n�mero  "
            << fnumero2
            << " � menor que o n�mero "
            << fnumero1
             <<endl;
    }
    return 0;
}


