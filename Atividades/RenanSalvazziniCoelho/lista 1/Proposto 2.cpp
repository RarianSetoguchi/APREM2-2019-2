/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Proposto 2
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
    float fnumero3 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << " Digite o valor de um primeiro n�mero: ";
    cin >> fnumero1;

    cout << " Digite o valor do segundo n�mero: ";
    cin >> fnumero2;

    cout << " Digite o valor do terceiro n�mero: ";
    cin >> fnumero3;

    cout << " A multiplica��o dos tr�s numeros �: "
          << fnumero1 * fnumero2 * fnumero3
          << endl;


    return 0;
}
