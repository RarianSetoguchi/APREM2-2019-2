/**********************************************************
- Autor:     Seu nome
- Descri��o: Breve descri��o do programa
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iIdade = 0;
    int i = 0;
    int iSoma = 0;
    int iSoma2 = 0;
    int iCntMenorQue5 = 0;
    int iCntMaiorOuIgual5 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    while (i < 5)
    {

        cout << "Digite a idade: ";
        cin >> iIdade;

        iSoma = iSoma + iIdade;

        if (iIdade < 5)
        {
            iCntMenorQue5++;
            iSoma2 = iSoma2 + iIdade;
        }

        i = i + 1; // i++;
    }

    cout << "Soma: " << iSoma << endl;

    cout << "Soma dos menores de 5: " << iSoma2 << endl;

    cout << "Porcentagem dos n�meros menores que 5: "
         << ( (float)iCntMenorQue5 / 5.0 ) * 100 << endl;


    return 0;
}
