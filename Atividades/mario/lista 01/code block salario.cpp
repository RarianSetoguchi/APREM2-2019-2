/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descri��o: Exerc�cio 15 - Este programa calcula seu saldo depois de pagar suas contas.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�vei
float fmassa=0;
float fmassaEng=0;
float fmassaEma=0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color 5D");

    //C�digo do programa
    cout << "digite o a massa em kg da pessoa ";
    cin >> fmassa;



    fmassaEng= fmassa + ( fmassa*15/100);
    fmassaEma= fmassa - (fmassa*20/100);

    cout << " se voce engordar 15%, voce tera " << fmassaEng << endl;

    cout << " se voce emagracer 20%, voce tera" << fmassaEma << endl;

    return 0;

}





