/**********************************************************
- Autor:     Isabela Aparecida de Souza
- Descri��o: Media Ex01
**********************************************************/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    int iNota1 = 0;
    int iNota2 = 0;
    int iNota3 = 0;
    int iNota4 = 0;
    int iMedia = 0;

    setlocale (LC_ALL,"");
    system("COLOR F6");

    cout << "inserir primeira nota ";
    cin  >> iNota1;
    cout << "inserir segunda nota ";
    cin  >> iNota2;
    cout << "inserir terceira nota ";
    cin  >> iNota3;
    cout << "inserir quarta nota ";
    cin  >> iNota4;

     iMedia = (iNota1+iNota2+iNota3+iNota4)/4;
    cout << "A media das notas e " << iMedia <<".";

        if (iMedia < 7)
        cout << " Voce N�O foi aprovado!" << endl;

    else if (iMedia > 7)
        cout << " Voce foi aprovado! " << endl;

           else if (iMedia = 7)
        cout << " Voce foi aprovado! " << endl;


}

