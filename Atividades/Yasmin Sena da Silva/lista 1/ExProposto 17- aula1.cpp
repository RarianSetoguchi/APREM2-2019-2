
/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: Raio
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fraio = 0;
    float fcomprimento = 0;
    float farea = 0;
    float fvolume = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o raio: ";
    cin  >> fraio;
    fcomprimento = 2 * 3.14 * fraio;
    farea = 3.14 * fraio * fraio;
    fvolume = (3* 3.14 * fraio * fraio * fraio) / 4;
    cout << "Sua circunfer�ncia ser� "
         << fcomprimento;
    cout << " Sua �rea �: "
         << farea
         <<" unidades de �rea."
         << " E por fim, o volume ser�: "
         << fvolume
         <<" unidades de volume."
         << endl;


    return 0;
}
