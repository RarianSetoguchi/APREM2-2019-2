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
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout << " Digite o primeiro n�mero: ";
    cin >> n1;
    cout << " dgite o segundo n�mero: ";
    cin >> n2;
    cout << " digite o terceiro numero: ";
    cin >> n3;
    cout << "resultado da multiplica��o dos numeros = " << n1 * n2 * n3;


    return 0;
}
