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
float fNota1 = 0;

float fNota2 = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout << "Quanto voc� tirou na primeira prova? ";
cin >> fNota1;

cout << "Quanto voc� tirou na segunda prova? ";
cin >> fNota2;

cout << "Considerando que a primeira prova tem peso 2 e a segunda 3, sua m�dia ponderada � de "
     << (fNota1*2 + fNota2*3)/5
     << " pontos."
     << endl;

    return 0;
}
