/**********************************************************
- Autor:Augusto Nogueira Almeida
- Descri��o:M�dia /aprovado ou reprovada
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
int inota1=0;
int inota2=0;
int inota3=0;
int inota4=0;
int imedia=0;

cout<<" digite a primeira nota";
cin>> inota1;

cout<<" digite a segunda nota";
cin>> inota2;

cout<<" digite a terceira nota";
cin>> inota3;

cout<<" digite a quarta nota";
cin>> inota4;



 imedia= (inota1+inota2+inota3+inota4)/4;

cout << "Voc� tirou" << imedia
         << " de m�dia."
         << endl;

if (imedia<7)
    {
        cout << "Voc� foi reprovado!" << endl;
    }
    else if (imedia >=7)
    {
        cout << "Voc� foi aprovado!" << endl;
    }

}
