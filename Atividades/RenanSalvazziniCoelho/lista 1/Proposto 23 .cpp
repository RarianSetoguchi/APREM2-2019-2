/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Proposto 23
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fangulo1= 0 ;
    float fangulo2= 0 ;
    int  iangulo3= 180;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite a medida do primeiro �ngulo do tri�ngulo: ";
    cin >> fangulo1;

    cout << "Digite a medida do segundo �ngulo tri�ngulo: ";
    cin >> fangulo2;


    cout << "O terceiro �ngulo do tri�ngulo �:"
        << iangulo3 - fangulo1 - fangulo2
        << " Graus "
         << endl;
    return 0;
}

