/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Proposto 8
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int ipesoKg = 0;
    int ipesoGramas= 1000;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite seu peso em quilos: ";
    cin >> ipesoKg;

    cout << " seu peso �  "
         << ipesoKg * ipesoGramas
         << " gramas"

         << endl;
    return 0;
}
