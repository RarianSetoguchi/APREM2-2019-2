/**********************************************************
- Autor:     Luiz Davi
- Descri��o: Lista 2: exerc�cio 1
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int iN1 = 0;
    int iN2 = 0;
    int iN3 = 0;
    int iN4 = 0;
    float fRes = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F2");

    //C�digo do programa
    cout << "Digite a primeira nota: ";
    cin >> iN1;

    cout << "Digite a segunda nota: ";
    cin >> iN2;

    cout << "Diugite a terceira nota: ";
    cin >> iN3;

    cout << "Digite a quarta nota: ";
    cin >> iN4;

    fRes = (iN1+iN2+iN3+iN4)/4;

    if (fRes >= 7)
    {
        cout << endl << "Aprovado! Parab�ns!";
    }
    else
    {
        cout << endl << "Reprovado, que pena!" << endl;
    }

    return 0;
}
