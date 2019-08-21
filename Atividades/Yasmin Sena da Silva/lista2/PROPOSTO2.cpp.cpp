/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: Reprovado, aprovado e exame
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
    float fmedia  = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite: Sua primeira nota: ";
    cin >> fnota1;

    cout << "Segunda nota: ";
    cin >> fnota2;

    fmedia = (fnota1 + fnota2) / 2;

    cout << "Sua m�dia � "
         << fmedia
         << endl;

    if (fmedia < 3)
    {
        cout << "Voc� est� reprovado! =(" << endl;
    }
    else if (fmedia < 7)
    {
        cout << "Voc� est� de exame!" << endl;
    }
    else
    {
        cout << "Voc� est� APROVADO! =)" << endl;
    }


    return 0;
}
