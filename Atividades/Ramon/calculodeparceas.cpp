/**********************************************************
- Autor:     Ramon Macedo
- Descri��o: calculo do valor final das parcelas
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iValorparcela = 0;
    int iNumdeparcelas = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o valor das parcelas: ";
    cin >> iValorparcela;

    cout << "Digite quantidade de parcelas: ";
    cin >> iNumdeparcelas;


    cout << "Voc� pagar� no fim "
         << iValorparcela * iNumdeparcelas
         << " reais."
         << endl;


    return 0;
}
