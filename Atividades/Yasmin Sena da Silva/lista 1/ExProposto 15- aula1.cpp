/**********************************************************
- Autor:     Yasmin Sena
- Descri��o: Dividas do Jo�o
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fconta1 = 0;
    float fconta2 = 0;
    float fsalario = 0;
    float fmulta = 1.02;

   //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite o sal�rio de Jo�o: ";
    cin  >> fsalario;
    cout << "Insira o valor da primeira e segunda conta respectivamente: ";
    cin  >> fconta1;
    cout << "e ";
    cin  >> fconta2;
    cout << "Sabendo que cada conta possui uma multa de 2%, resta do sal�rio de Jo�o "
         << fsalario - ( fconta1 * fmulta ) - (fconta2 * fmulta)
         << " reais."
         << endl;


    return 0;
}
