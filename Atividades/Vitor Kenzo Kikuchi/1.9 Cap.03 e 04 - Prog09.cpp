/**********************************************************
- Autor:     Vitor Kenzo Kikuchi
- Descri��o: Exerc�cio 15 - Este programa calcula seu saldo depois de pagar suas contas. (com estrutura condicional)
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
float fSalario = 0;
float fConta1 = 0;
float fConta2 = 0;
float fMulta = 0;
float ffinal = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
cout << "Qual � o valor de seu sal�rio? ";
cin >> fSalario;

cout << "E quanto ao valor de uma das contas que voc� deve pagar? ";
cin >> fConta1;

cout << "E o valor da segunda conta? ";
cin >> fConta2;

fMulta = (fConta1*2/100 +fConta1) + (fConta2*2/100 + fConta2);
ffinal = fSalario - fMulta;

cout << "Considerando a multa de 2% por conta do atraso, voc� ter� R$"
     << ffinal
     << " ap�s quitar todas suas d�vidas."
     << endl;

if (ffinal < 400 && ffinal > 0)

{
cout << "Eu acho que algu�m vai ter que cancelar a netflix..."
     << endl;
}

else if (ffinal > 5000)

{
cout << "T� com dinheiro de sobra em? se quiser pagar minhas contas, eu agrade�o."
     << endl;
}
else if (ffinal < 0)
{
cout << "Eu creio que a �nica sa�da � pedir dinheiro no sem�foro..."
     << endl;
}
else
{
cout << "Ufa, seu nome n�o vai pro SPC!"
     << endl;
}
    return 0;
}
