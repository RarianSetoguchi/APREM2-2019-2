/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Lista 2 - Proposto 2
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fnota1 = 0;
    float fnota2 = 0;
    float fnota3 = 0;
    float fnotafim = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite sua primeira nota: ";
    cin >> fnota1;

    cout << "Digite sua segunda nota: ";
    cin >> fnota2;

    cout << "Digite sua terceira nota: ";
    cin >> fnota3;

    fnotafim = ( fnota1 + fnota2 + fnota3 ) / 3;

    cout << "Sua nota final � " << fnotafim
        << endl;

    if (fnotafim < 3)
    {
        cout << "Voc� est� REPROVADO!" << endl;
    }
    else if (fnotafim < 7)
    {
        cout << "Voc� est� de EXAME!" << endl;
    }
    else
    {
       cout << "Voc� est� APROVADO! Parab�ns..." << endl;
    }
    return 0;
}

