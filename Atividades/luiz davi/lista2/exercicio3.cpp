/**********************************************************
- Autor:     Luiz Davi
- Descri��o: listata 2: exercicio 4
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

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << endl <<"Digite o primeiro numero: ";
    cin>> iN1;

    cout << endl << "Digite o segundo numero: ";
    cin >> iN2;

    cout << endl << "Digite o terceiro numero";
    cin >> iN3;

    if (iN1>iN2&& iN1>iN3)
    {
       cout << endl << "O numero1 � menor que o numero2 e maior que o numero 3:" << endl;

    }

    if (iN2>iN1&& iN2>iN3)
    {
    cout << endl <<"O numero2 � maior que o numero1 e maior que numero 3:" << endl;
    }

    else
    {
        cout << endl <<"O numero3 � maior que o numero1 e maior que o numero2:" << endl;
    }



    return 0;
}
