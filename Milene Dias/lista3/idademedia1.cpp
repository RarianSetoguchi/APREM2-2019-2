/**********************************************************
- Autor:     Milene Caroline B. D. Chaves
- Descrição: Comando while
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;

int main()
{
    //Declaração de variáveis
      int idade = 0;
      float faltura = 0;
      float fpeso=0;
      int i50=0;
      int i=1;
      float f20 =0;
      float falturat =0;
      float f40=0;

    //Configuração da tela de saída
    setlocale(LC_ALL,"");
    system("color F1");

    //Código do programa


 while (i<6)
 {

   cout<<" qual a sua idade:  ";
   cin>>idade;

   cout<< " qual a sua altura: ";
   cin>>faltura;


   cout<< " qual o seu peso: ";
   cin>>fpeso;

   i=i+1;

   if ( idade>50)
 {
    i50++;

}

if (idade>=10 && idade <= 20 )

   {
     falturat=falturat+faltura;
     f20 ++;
   }

   if ( fpeso<=39)

  {
      f40++;
  }



 }



  cout<<i50 <<"numero de pessoas com idade superior a 50 anos\n";
  cout<< falturat/f20 << " e a media das alturas  \n" ;
  cout<< (100*f40)/i <<"% de pessoas com peso inferior a 40kg \n";


 }

