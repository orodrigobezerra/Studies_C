#include <stdio.h>
#include <string.h>

// Desenvolver uma aplicação para salvar contactos

// Criação de uma estrutura de dados para tal

typedef struct
{
    char nome[5];
    int telefone;
    int idade;
}

Contactos;

int main()
{
    // Agenda com 5 contactos

    Contactos agenda[5]; // Criação de uma variável turma do tipo agenda

    // Solicitar ao utilizador os dados

    int i;
    int tam = sizeof(agenda) / sizeof(agenda[0]); // Representa o tamanho da agenda

    for (i = 0; i < tam; i++) // Vai percorrer a array
    {
        printf("Entre com o %d nome: ", (i + 1));      // Solicita ao utilizador o nome do contacto
        scanf("%s", &agenda[i].nome);                  // Guarda a informação
        printf("Entre com o %d telefone:  ", (i + 1)); // Solicita ao utilizador o telefone do contacto
        scanf("%d", &agenda[i].telefone);              // Guarda a informação
        printf("Entre com a %d idade:  ", (i + 1));    // Solicita ao utilizador a idade do contacto
        scanf("%d", &agenda[i].idade);                 // Guarda a informação
    }

    printf("Listagem de contactos da agenda: \n");

    for (i = 0; i < tam; i++) // Percorre a array preenchida com os valores acima inseridos
    {
        printf("Contacto: %s -> Telefone: %d -> Idade: %d\n", agenda[i].nome, agenda[i].telefone, agenda[i].idade);
    }

    return 0;
}
