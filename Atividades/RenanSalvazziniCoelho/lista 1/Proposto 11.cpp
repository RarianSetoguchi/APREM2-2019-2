/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Proposto 11
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fdmaior = 0 ;
    float fdmenor = 0 ;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite a medida da diagonal maior do seu losango : ";
    cin >> fdmaior;

    cout << " Digite a medida da diagonal menor do seu losango :  ";
    cin >> fdmenor;

    cout << " A �rea do seu losango � :"
        << (fdmaior * fdmenor) / 2
        <<" unidades de �rea "
         << endl;
    return 0;
}
