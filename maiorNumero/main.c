#include <stdio.h>
#include <stdlib.h>

int numero()
{
    int n ;
    printf("Digite um número: ");
    scanf("%d", & n);
    return n;
}

int maior_2numeros(int n1, int n2)
{
    int maior;
    if( n1 > n2)
    {
        maior = n1;
    }
    else
    {
        maior = n2;
    }
    return maior;
}

int main()
{
    int num1 = numero();
    int num2 = numero();
    int m = maior_2numeros(num1, num2);
    return printf("O maior destes números: %d, %d é %d", num1, num2, m);   
}

