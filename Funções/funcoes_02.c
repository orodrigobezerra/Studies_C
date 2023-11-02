#include <stdio.h>
#define TAM 10

// para passar arrays para função numeros[] nome da variável apenas com parênteses 
void povoar(int numeros[], int tamanho)
{
    int i;

    for(i = 0; i < tamanho; i++)
    {
        printf("Número %d: ", i+1);
        scanf("%d", &numeros[i]);
    }   
}

void mostrar(int numeros[], int tamanho)
{
    int i;

    printf("Números Digitados:\n");

    for(i = 0; i < tamanho; i++)
    {
        printf("%d\n", numeros[i]);
    }  

}

void main()
{
    int numeros[TAM];

    // para chamar funções do tipo void escrevemos o nome seguido parênteses com
    povoar(numeros, TAM); // passar arrays para a função é só escrever o nome dela
    mostrar(numeros, TAM);

}