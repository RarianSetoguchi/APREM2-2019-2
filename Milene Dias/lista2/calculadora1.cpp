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

    int inumero1=0;
    int inumero2=0;
    int imedia=0;
    int idiferenca=0;
    int iproduto=0;
    int idivizao=0;
    int iOpcao = 0;

    cout<< " Digite um numero: ";
    cin>>inumero1;

    cout<< " Digite outro numero: ";
    cin>>inumero2;


    cout << " 1-media " ;
    cout << " 2-diferenca " ;
    cout << " 3-produto " ;
    cout << " 4-divizao " ;

    cout << "  escolha uma operacao:  ";
    cin >> iOpcao;

     if (iOpcao == 1)
     {
        cout << " o resultado e: ";
        cout << (inumero1+inumero2)/2;

     }


     else if (iOpcao == 2)
     {
        cout << " o resultado e: ";
        cout << (inumero1-inumero2);

     }

     else if (iOpcao == 3)
        {
            cout << " o resultado e: ";
            cout << (inumero1*inumero2);

        }


     else if (iOpcao==4)
     {
         cout << " o resultado e: ";
         cout << (inumero1/inumero2);

     }





}
