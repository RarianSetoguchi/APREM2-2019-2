/**********************************************************
- Autor:     Luiz Davi
- Descri��o: listata 2: exercicio 2
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

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << endl <<"Digite o primeiro numero: ";
    cin>>iN1;

    cout << endl << "Digite o segundo numero: ";
    cin >> iN2;

    if (iN1<iN2)
    {
       cout << endl << "numero1 � menor que o numero2:" << endl;

    }

    else
    {
    cout << "numero1 � maior que o numero2:";
    }


    return 0;
}
