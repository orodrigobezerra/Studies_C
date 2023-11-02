#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// O jogo consiste em saber o nosso estado de humor
// Criar um array com várias palavras que indiquem o nosso estado de humor
// Solicitar ao utilizador o primeiro nome
// Somar as letras de forma a obter um número total
// Fazer uma divisão inteira para obter o resto para saber qual é o estado de humor a que pertence
// Mostrar o resultado

int main()
{
    // Declarar variáveis
    char humor[10][15];
    char nomes[15];
    int i;
    int total;
    int indice;

    // Preencher as variáveis
    strcpy(humor[0], "feliz");
    strcpy(humor[1], "triste");
    strcpy(humor[2], "animado");
    strcpy(humor[3], "ansioso");
    strcpy(humor[4], "zangado");
    strcpy(humor[5], "eufórico");
    strcpy(humor[6], "brincalhão");
    strcpy(humor[7], "furioso");
    strcpy(humor[8], "confuso");
    strcpy(humor[9], "contente");

    printf("Digite o seu nome: \n");
    scanf("%s", &nomes);

    i = 0;
    total = 0;

    while(nomes[i] != '\0') // "\0" significa fim do texto
    {
        total = total + (int) nomes[i];
        i++;
    }

    indice = total % 10;

    printf("Como o %s está se sentindo hoje?\n", nomes);
    printf("O %s está se sentindo %s\n", nomes, humor[indice]);

    return 0;
}