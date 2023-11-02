#include <stdlib.h>
#include <stdio.h>

int potencia(int base, int exp)
{
    int i;
    int resultado = 1;
    
    for (i =1; i <= exp; i++)
    {
        resultado *= base;
    }
    
    return resultado;
}


int main()
{
    int base;
    int exp;
    printf("Digite a base\n");
    scanf("%d", &base);
    printf("Digite o expoente\n");
    scanf("%d", &exp);
    printf("%d elevado a %d = %d", base, exp, potencia(base, exp));
    
    return 0;
}
