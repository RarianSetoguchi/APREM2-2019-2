/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: Pre�o do carro
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fcarro = 0;
    float fpreco1 = 0;
    float fpreco2 = 0;
    float fpreco3 = 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o custo de f�brica do carro: ";
    cin >> fcarro;

    fpreco1 = (0.05 * fcarro) + fcarro;
    fpreco2 = (0.10 * fcarro) +(0.15 *fcarro) + fcarro;
    fpreco3 = (0.15 * fcarro) +(0.20 *fcarro) + fcarro;
    
    if (fcarro <12001)
    {
        cout << "Com o ajuste da distribuidora e dos impostos, o novo pre�oo do carro ser� de " 
        <<fpreco1
        <<" reais."
        << endl;
    }
    else if (fcarro < 25001)
    {
        cout << "Com o ajuste da distribuidora e dos impostos, o novo pre�oo do carro ser� de " 
        << fpreco2
        <<" reais"
        << endl;
    }
   
    else
    {
        cout << "Com o ajuste da distribuidora e dos impostos, o novo pre�oo do carro ser� de "
        <<fpreco3
        <<" reais"
         << endl;
    }

    return 0;
}
