/**********************************************************
- Autor:     Mario Neto
- Descri��o: massa corporal.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�vei
float fbasemaior=0;
float fbasemenor=0;
float faltura=0;
float farea=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color 5D");

    //C�digo do programa
    cout << " digite a base maior ";
    cin >> fbasemaior;
    cout << " digite a base menor ";
    cin >> fbasemenor;
    cout << " digite a altura ";
    cin >> faltura;

    farea= (fbasemaior + fbasemenor)*faltura/ 2;
    cout << "a area do trapezio � " << farea << endl;

    return 0;

}





