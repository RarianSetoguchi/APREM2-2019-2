// * ********************************************************************************************
//-autor: Milene Caroline
//-programa:
//************************************************************************************************ * //

#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()

{
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F2");


    //Declara��o de vari�veis

    int isenha=0;


    cout<< " Digite a senha : ";
    cin>>isenha;

    if(isenha==4531)
    {
        cout << " senha correta! ";
    }

    else
    {
        cout << " a senha esta incorreta! ";
    }



}
