/**********************************************************
- Autor: Augusto N Almeida
- Descri��o:Exercicio 9 lista 3
**********************************************************/
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

main()
{
    float faltura=0;
    int idade=0;
    int idadet=0;
    float fpeso=0;
    int ig =0;
    int i = 0;
    int i3=0;
    int ipessoas=0;
    int ipessoas3=0;


    setlocale(LC_ALL,"");
    system("color F1");



     while (i < 10)
    {
      cout<<"digite o sua idade  ";
      cin>> idade;

      cout<<"digite o seu peso (kg) ";
      cin>> fpeso;

      cout<<"digite o sua altura em (cm) ";
      cin>> faltura;


i = i + 1;

   if (idade>0);
   {
      (idadet=idade+idadet);
   }

   if(fpeso>90&&faltura<150)
   {

       ipessoas++;

   }
if(10<idade&&  faltura<150)
   {
        ig++;
       (ipessoas=ig+ipessoas);

   }

   if(10<=idade&&idade<=30&&faltura>190)
   {
        i3++;
       (ipessoas3=i3+ipessoas3);


   }


    } // fim do la�o

           cout <<"\n media de idade das pessoas: "<< idadet/i<<endl;
           cout<<"pessoas com mais de 90 Kg e menores que 150 cm "<< (ipessoas)<<endl;
           cout<<"porcentagem de pessoas entre 10 a 30 anos com mais de 190 cm "<<((ipessoas3*100)/i)<<"%"<<endl;



} // fim do main

