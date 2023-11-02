#include <stdio.h>
#include <string.h>


// Desenvolver uma aplicação para introdução de notas dos alunos

// Criação de uma estrutura de dados para tal

typedef struct 
{
    int id;
    char nome[15];
    float nota;
    char class[15];
}

Aluno;

int main()
{
    // Turma com 10 alunos

    Aluno turma[5]; // Criação de uma variável turma do tipo Aluno

    // Solicitar ao utilizador os dados

    int i;
    int tam = sizeof(turma) / sizeof(turma[0]); // Representa o tamanho da turma
    
    for (i = 0; i < tam ; i++) // Vai percorrer a array
    {
        turma[i].id = i+1; // Gera o ID do aluno automaticamente 
        
        printf("Entre com o %dº nome: ", (i+1)); // Solicita ao utilizador o nome do aluno
        scanf("%s", &turma[i].nome); // Guarda a informação 
        printf("Indique a nota do %d aluno:  ", (i+1)); // Solicita ao utilizador a nota do aluno
        scanf("%f", &turma[i].nota); // Guarda a informação 
        (turma[i].nota < 10)? strcpy(turma[i].class, "Reprovado"):strcpy(turma[i].class, "Aprovado");
    }

    printf("Listagem da turma: \n");

    char aprov[20];

    for (i = 0; i < tam ; i++) // Percorre a array preenchida com os valores acima inseridos
    {
        /*
        if (turma[i].nota <= 10)
        {
            printf("ID: %d -> Nome: %s -> Nota: %0.1f -> Situação: Reprovado!\n", turma[i].id, turma[i].nome, turma[i].nota);
        }
        else
        {
            printf("ID: %d -> Nome: %s -> Nota: %0.1f -> Situação: Aprovado!\n", turma[i].id, turma[i].nome, turma[i].nota);
        }
        */

        // Outra forma de fazer a condição:
        
        if(turma[i].nota < 9.5)
        {
            strcpy(aprov, "Reprovado!");
        }
        else
        {
            strcpy(aprov, "Aprovado!");
        }
        
        printf("ID: %d -> Nome: %s -> Nota: %0.1f -> Situação: %s\n", turma[i].id, turma[i].nome, turma[i].nota, aprov); 

    }



    return 0;
    
}