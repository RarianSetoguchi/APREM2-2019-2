/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: �rea losango
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fdiagonal1 = 0;
    float fdiagonal2 = 0;

   //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite a diagonal maior do losango: ";
    cin  >> fdiagonal1;
    cout << "Insira a sua diagonal menor: ";
    cin  >> fdiagonal2;
    cout << "A �rea do losango � de "
         << ( fdiagonal1 * fdiagonal2 ) / 2
         << " unidades de �rea."
         << endl;


    return 0;
}
