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
float fLitros = 0;

float fEficiencia = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout << "Quantos litros de comb�stivel est�o no tanque do seu carro? ";
cin >> fLitros;

cout << "Quantos km seu carro percorre com 1 litro? ";
cin >> fEficiencia;

cout << "Voc� pode percorrer "
     << fLitros * fEficiencia
     << " km."
     << endl;


    return 0;

}
