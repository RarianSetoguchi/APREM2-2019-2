/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Proposto 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fnumero1 = 0;
    float fnumeor2 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite um n�mero: ";
    cin >> fnumero1;

    cout << " Digite outro n�mero: ";
    cin >> fnumeor2;


    cout << " A divi�o do primeiro n�mero com o segundo � :  "
         << fnumero1 / fnumeor2


         << endl;
    return 0;
}

