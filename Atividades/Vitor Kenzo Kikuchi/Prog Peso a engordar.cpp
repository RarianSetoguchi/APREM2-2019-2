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
float fPeso = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout << "Quantos kg voc� pesa agora? ";
cin >> fPeso;

cout << "Se voc� engordasse 15%, seu peso seria "
     << fPeso + (fPeso*15/100)
     << " kg."
     << endl;

cout << "se engordasse 20%, voc� pesaria "
     << fPeso + (fPeso*20/100)
     << " kg."
     << endl;


    return 0;

}
