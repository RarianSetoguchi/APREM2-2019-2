/**********************************************************
- Autor:Augusto Nogueira Almeida
- Descri��o: Tabuada
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declara��o de vari�veis
    int i = 0;
    int ival = 0;

    //Configura��o da tela de sa�da
    setlocale(LC_ALL,"");
    system("color F1");

    //C�digo do programa
    while (i < 12)
    {
cout<<"digite um numero";
cin>> ival;

cout<< ival <<" x 0 =  "<< (ival*0)<<endl;

cout<< ival <<"  x 1 = "<< (ival*1)<<endl;

cout<< ival <<" x 2 = "<< (ival*2)<<endl;

cout<< ival <<" x 3 = "<< (ival*3)<<endl;

cout<< ival <<" x 4 = "<< (ival*4)<<endl;

cout<< ival <<" x 5 = "<< (ival*5)<<endl;

cout<< ival <<" x 6 = "<< (ival*6)<<endl;

cout<< ival <<" x 7 = "<< (ival*7)<<endl;

cout<< ival <<" x 8 = "<< (ival*8)<<endl;

cout<< ival <<" x 9 = "<< (ival*9)<<endl;

cout<< ival <<" x 10 = "<< (ival*10)<<endl;



        cout << i << endl;
        i = i + 1;
    }


    return 0;
}
