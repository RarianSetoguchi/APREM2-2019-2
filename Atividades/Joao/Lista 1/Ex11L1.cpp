/********************************************************
- Autor: Jo�o Pedro Neves Baldin

- Descri��o: Lista 01 - Exerc�cio 08
********************************************************/
#include <iostream>

#include <conio.h>

#include <locale.h>

#include <cstdlib>

using namespace std;



int main()

{
 float diagonalM, diagonalm, area;

    system("cls"); //Limpa a tela
    setlocale(LC_ALL,""); // Ativa acentua��o

    cout << "\nInforme o tamanho da diagonal maior do lozango ";  //Recebe a primeira diagonal

    cin >> diagonalM; // Introdu��o de variavel


    cout << "\n Informe o tamanho da diagonal menor do lozango "; // Recebe a segunda diagonal

    cin >> diagonalm; // Introdu��o de variavel



    area = diagonalM* diagonalm/2; // Calcula a �rea do lozango


    cout << "\nA �rea do lozango = " << area;

    // Para o programa a espera de um ENTER

    getch();

}


