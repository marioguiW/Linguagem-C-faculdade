// Construa uma estrutura aluno com nome, número de matrícula e curso. Leia do
// usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os
// // dados na tela.

#include <stdio.h>
#include <string.h>

int main(){

    struct escola{
        char nome_aluno[15];
        int matricula;
        char curso[20];
    }aluno[5];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite o nome de um aluno : ");
        gets(aluno[i].nome_aluno);
        fflush(stdin);
        printf("Digite o numero de matricula : ");
        scanf("%d", &aluno[i].matricula);
        fflush(stdin);
        printf("Digite qual o nome do curso : ");
        gets(aluno[i].curso);
        fflush(stdin);
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n%d\n%s\n\n", aluno[i].nome_aluno, aluno[i].matricula, aluno[i].curso);
    }
    
        
    }