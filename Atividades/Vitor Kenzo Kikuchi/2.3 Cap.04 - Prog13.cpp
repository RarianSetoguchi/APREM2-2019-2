/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descri��o: Exerc�cio 05 - Este programa recebe dois dois n�meros e te d� op��es do que fazer com eles.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
float fNumber1 = 0;
float fNumber2 = 0;
int iOpcao = 0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F0
           ");

    //C�digo do programa
cout << "Forne�a o primeiro n�mero: ";
cin >> fNumber1;

cout << "Digite o segundo n�mero: ";
cin >> fNumber2;

cout << "Se voc� deseja saber a m�dia dos n�meros digitados, digite 1."
     << endl;

cout << "Caso voc� queira saber a diferen�a do maior pelo menor, digite 2."
     << endl;

cout << "Para saber o produto entre os dois n�meros, digite 3."
     << endl;

cout << "E se voc� quiser saber a divis�o do primeiro pelo segundo, digite 4."
     << endl;

cout << "ent�o...? ";
cin >> iOpcao;

if (iOpcao == 1)
{
cout << "A m�dia desses n�meros � igual a "
     << (fNumber1 + fNumber2)/2
     << endl;
}
else if (iOpcao == 2 && fNumber1 >= fNumber2 )
{
cout << "A diferen�a do maior pelo menor � igual a "
     << fNumber1 - fNumber2
     << endl;
}
else if (iOpcao == 2 && fNumber2 >= fNumber1 )
{
cout << "A diferen�a do maior pelo menor � igual a "
     << fNumber2 - fNumber1
     << endl;
}
else if (iOpcao == 3)
{
cout << "O produto entre esses dois n�meros � igual a "
     << fNumber1*fNumber2
     << endl;
}
else
{
cout << "O quociente � igual a "
     << fNumber1 / fNumber2
     << endl;
}

    return 0;
}
