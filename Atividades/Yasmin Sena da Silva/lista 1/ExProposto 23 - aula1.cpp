/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: �ngulos internos de um tri�ngulo
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fangulo1 = 0;
    float fangulo2 = 0;
    float fangulo3 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o primeiro e segundo �ngulo do tri�ngulo: ";
    cin  >> fangulo1;
    cout << " graus e ";
    cin  >> fangulo2;
    fangulo3 = 180 - fangulo1 - fangulo2;
    cout << "O terceiro �ngulo ser� de "
         << fangulo3
         << " graus."
         << endl;


    return 0;
}
