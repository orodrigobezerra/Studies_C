#include <stdio.h>
#include <stdlib.h>

//Função para contar o número de ocorrências de um caracter numa string

int main()
{
    char palavra[46]; // guardar a palavra digitada
    char caracter; // guardar a letra a pesquisar
    int i; // vatiável a ser utilizada dentro do for
    int count=0; // variável para contar o número de ocorrências;
    printf("Introduza uma palavra: \n"); // texto para informar o utilizador
    scanf("%s", &palavra); // aguarda que o utilizador digite a palavra
    getchar(); //apanhar o \n <* enter. Limpa o buffer
    printf("Introduza um caracter: \n"); //texto para informar o utilizador
    scanf("%c", &caracter); // aguarda que o utilizador digite o caracter

        for (i=0; i<46; i++) // for inicia a 0, termina a 45 pq o array é de 46 caracteres
        {
            if (palavra[i] == caracter) // testar se o caracter posicional é igual ao caracter a pesquisar
            {
                count = count+1; // se encontrado, incrementa o contador uma unidade
            }
        }
    
    printf("A palavra: %s contém %d caracteres %c na pesquisa", palavra, count, caracter); // apresenta o número de ocorrências

    return 0; // devolve 0 pq o main tem de devolver um inteiro
}
