
/********************************************************
- Autor: Jo�o Pedro Neves Baldin

- Descri��o: Lista 01 - Exerc�cio 023
********************************************************/

#include <stdio.h>

int main()
{
    float num1, num2, num3, mult;

    printf("Digite o primeiro numero: " );
    scanf("%f", &num1);

    printf("Digite o segundo numero: " );
    scanf("%f", &num2);

     printf("Digite o terceiro numero: " );
    scanf("%f", &num3);


    //Multiplica�ao
    mult = num1 * num2 * num3;

    printf("%.2f * %.2f * %.2f = %.2f\n", num1, num2, num3, mult);

}
