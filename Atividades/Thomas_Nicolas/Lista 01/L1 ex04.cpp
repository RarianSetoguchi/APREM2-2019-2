/**********************************************************
- Autor:     Thomas Nicolas
- Descri��o: Fa�a um programa que receba duas notas, calcule e mostre a m�dia ponderada dessas notas,
            considerando peso 2 para a primeira e peso 3 para a segunda.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
float  fnota1= 0;
float  fnota2= 0;
float  fnota3= 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa

    cout    << "insira a nota da prova: ";
    cin     >> fnota1;
    cout    << "insira a nota do projeto de aplicativo: ";
    cin     >> fnota2;
    cout    << "insira a nota de atividades no GitHub: ";
    cin     >> fnota3;
    cout    << "Sua m�dia final �: "<<(fnota1*2+fnota2*3+fnota3*5)/10;

    return 0;
}
