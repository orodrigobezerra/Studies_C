#include <stdio.h>
#include <stdlib.h>

//Solicitar ao utilizador números positivos até pressionar um número negativo
//Mostrar números introduzidos

int main()
{
    int numb[100];
    /*int i;*/
    int parar;
    int i = 0;
    numb[0] = 0;

   while(1) //Ciclo infinito
    {
        printf("Entre com um número: ");
        scanf("%d", &numb[i]);
        if(numb[i] < 0)
            break; //Força a terminar o ciclo quando introduzir números negativos
        i++;
    }

    parar = i;

    for(i = 0; i < 100; i++)
    {
        if(numb[i] < 0)
            break;
        printf("%d\n", numb[i]);
    }

    do
   {
        printf("Entre com um número: ");
        scanf("%d", &numb[i]);
        i++;
    }while(numb[i-1] > -1);

    for(i = 0; i < parar; i++)
    {
        printf("%d\n", numb[i]);
    }

    
    return 0;
}