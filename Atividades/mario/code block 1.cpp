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

float fnota1=0;
float fnota2=0;
float fmedia=0;
    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color b0");

    //C�digo do programa
cout << " digite a nota 1 ";
cin >> fnota1;
cout << " digite a nota 2 ";
cin >> fnota2;



fmedia= (fnota1+fnota2)/2;

if ( fmedia<3)
cout << " indiv�duo reprovado " << endl;

else if ( 3<fmedia<7)
cout << " indiv�duo est� de exame " <<endl;

else
cout << " indiv�duo aprovado " <<endl;








    return 0;
}
