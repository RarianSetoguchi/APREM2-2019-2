/**********************************************************
- Autor:     M�rio Neto
- Descri��o: multiplica��o de 3 vari�veis
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int inumber1=0;
    int inumber2=0;
    int inumber3=0;
    int imultiplicacao=0;


    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << " escolha o primeiro numero " ;
    cin >> inumber1;
    cout << " escolha o segundo numero " ;
    cin >> inumber2;
    cout << " escolha o terceiro numero " ;
    cin >> inumber3;
    imultiplicacao = inumber1*inumber2*inumber3;
    cout << " o produto � " << imultiplicacao ;



    return 0;

}
