/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descri��o: Exerc�cio 25 - Este programa calcula o b�nus de um funcion�rio de acordo com as horas extras e de folga.
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
float fHorasEx = 0;
float fHorasFg = 0;
float fPremio = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F4");

    //C�digo do programa
cout << "� Natal! Nossa empresa dar� um pr�mio a todos aqueles que contribuiram comprometidamente com ela durante o ano. "
     << "\n"
     << "\n"
     << "Ent�o, quantas horas extras voc� fez no total? ";
cin  >> fHorasEx;

cout << "E quantas horas voc� tirou de folga? ";
cin  >> fHorasFg;

fPremio = fHorasEx*60 - fHorasFg*60*2/3;

if ( fPremio >= 2400 )
{
cout << "Parab�ns, n�s reconhecemos seu esfor�o: Seu pr�mio � de R$500,00. Feliz Natal!!!"
     << endl;
}
else if ( fPremio >= 1800 && fPremio < 2400 )
{
cout << "Parab�ns, n�s reconhecemos seu esfor�o: Seu pr�mio � de R$400,00. Feliz Natal!!!"
     << endl;
}
else if ( fPremio >= 1200 && fPremio < 1800 )
{
cout << "Parab�ns, n�s reconhecemos seu esfor�o: Seu pr�mio � de R$300,00. Feliz Natal!!!"
     << endl;
}
else if ( fPremio >= 600 && fPremio < 1200)
{
cout << "Parab�ns, n�s reconhecemos seu esfor�o: Seu pr�mio � de R$200,00. Feliz Natal!!!"
     << endl;
}
else
{
cout << "Parab�ns, n�s reconhecemos seu esfor�o: Seu pr�mio � de R$100,00. Feliz Natal!!!"
     << endl;
}

    return 0;

}
