/**********************************************************
- Autor:     Lineu Lima
- Descri��o: Comando while
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�vei
    int i = 0;
    float fIdade = 0;
    float fAltura = 0;
    float fPeso = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F3");

    //C�digo do programa

    while (i < 2)
 {
        cout << "Digite sua idade: " ;
        cin >> fIdade;

        cout << "Digite sua altura: " ;
        cin >> fAltura;

        cout << "Digite sua Peso: " ;
        cin >> fPeso;
        i++;
 }
