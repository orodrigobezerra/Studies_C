#include <stdlib.h>
#include <stdio.h>


int CalcularMDC(int a, int b) 
{

    int resto;

    while (b != 0)
    {
        resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}
    
int main() 
{
    int num1, num2;

    printf("Entre com o 1º número: ");
    scanf("%d", &num1);

    printf("Entre com o 2º número: ");
    scanf("%d", &num2);

    int mdc = CalcularMDC(num1, num2);

    printf("O máximo divisor comum (MDC) de %d e %d é: %d\n", num1, num2, mdc);
    

    return 0;
}


