/**********************************************************
- Autor:     Renan Salvazzini Coelho
- Descri��o: Proposto 7
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    float fpeso = 0 ;
    float fengordar = 1.15;
    float femagrecer = 0.8 ;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    cout << "Digite seu peso atual em quilos: ";
    cin >> fpeso;
    cout << " Seu novo peso se voc� engordar 15 porcento do seu peso atual � de: "
         << fpeso * fengordar
         << " quilos."
         << " E seu novo peso se voc� emagrecer 20 porcento do seu peso atual � : "
         << fpeso * femagrecer
         << " quilos "
         << endl;
    return 0;
}
