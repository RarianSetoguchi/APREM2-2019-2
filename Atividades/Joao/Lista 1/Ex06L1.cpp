/********************************************************
- Autor: Jo�o Pedro Neves Baldin

- Descri��o: Lista 01 - Exerc�cio 06
********************************************************/
#include <iostream>

#include <conio.h>

#include <locale.h>

#include <cstdlib>

using namespace std;



int main()

{

    float fixo, vendas, comissao, salario;

    //Limpa a tela

    system("cls");

    // Ativa acentua��o

    setlocale(LC_ALL,"");

    // Mostra mensagem antes da leitura do sal�rio

    cout << "\nDigite o sal�rio do funcion�rio: $";

    // Sal�rio fixo

    cin >> fixo;

    //Valor das vendas

    cout << "\n Informe o valor total das vendas: $ ";

    // Informa o valor total das vendas

    cin >> vendas;

    // Calcula a comiss�o

    comissao = vendas * 4/100;

    // Calcula o novo sal�rio

    salario = fixo + comissao;

    // Mostra o novo sal�rio

    cout << "\n Salario = $ " << fixo;
    cout << "\n Comiss�o = $ " << comissao;
    cout << "\n Total a receber = $ " << salario;

    // Para o programa a espera de um ENTER

    getch();

}
