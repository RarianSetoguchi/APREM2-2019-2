/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Proposto 10
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float flado = 0 ;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite a medida de um lado do quadrado : ";
    cin >> flado;
    cout << " A �rea do quadro � de :  "
        << flado * flado
        <<" unidades de �rea "
         << endl;
    return 0;
}
