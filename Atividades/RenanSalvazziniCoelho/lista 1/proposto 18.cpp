/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Proposto 18
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fcelsius= 0 ;



    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite a temperatura atual em graus Celsius : ";
    cin >> fcelsius;

    cout << "A temperatura em Fahrenheit �:"
        << (180* fcelsius + 3200) / 100
        << " Graus "
         << endl;
    return 0;
}
