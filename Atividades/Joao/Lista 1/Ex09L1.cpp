/********************************************************
- Autor: Jo�o Pedro Neves Baldin

- Descri��o: Lista 01 - Exerc�cio 09
********************************************************/
#include <iostream>

#include <conio.h>

#include <locale.h>

#include <cstdlib>

using namespace std;



int main()

{

    float baseM, basem, soma, altura, area;

    //Limpa a tela

    system("cls");

    // Ativa acentua��o

    setlocale(LC_ALL,"");

    cout << "\nInforme o tamanho da base maior do trap�zio ";  //Recebe a primeira base

    cin >> baseM; // Introdu��o de variavel


    cout << "\n Informe o tamanho da base menor do trap�zio "; // Recebe a segunda base

    cin >> basem; // Introdu��o de variavel

    cout << "\n Informe a altura do trap�zio "; // Recebe a altura

    cin >> altura; // Introdu��o de variavel

    soma = baseM + basem; //Calcula as bases



    area = soma * altura/2; // Calcula a �rea do trap�zio


    cout << "\nA �rea do trap�zio = " << area;

    // Para o programa a espera de um ENTER

    getch();

}
