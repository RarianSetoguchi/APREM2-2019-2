/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: Convers�o de unidades (kg para gramas)
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int ipesoKG = 0;
    int ipesogramas = 1000;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite seu peso em quilos: ";
    cin >> ipesoKG;
    cout << "Seu peso equivale a "
         << ipesoKG * ipesogramas
         << " gramas."
         << endl;


    return 0;
}
