#include <stdlib.h>
#include <stdio.h>


int main(void)
{
    int num, i, resultado=0;

    printf("Entre com um número: ");
    scanf("%d", &num);

    for (i = 2; i <= num /2; i++)
    {
        if (num % i == 0)
        {
           resultado++;
           break; 
        }
    }
    
    if (resultado == 0)
        printf("O número %d é primo!", num);
    else
        printf("O número %d não é primo!", num);

    return 0;
}   











