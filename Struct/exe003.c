// Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto
// de alunos: Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma
// turma de até 10 alunos. Após ler todos os dados digitados, e depois de armazenálos em um vetor de estrutura, exibir na tela a listagem final dos alunos com as suas
// respectivas médias finais (use uma média ponderada: Nota1 com peso=1.0 e Nota2
// com peso = 2.0). 

#include <stdio.h>

int main(){

    struct dados{
        int matricula;
        char nome[20];
        int codigoDisciplina;
        float nota1;
        float nota2;
    }alunos[5];

    printf("Digite os dados da matricula de 5 alunos!\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o dado da matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Digite o nome do aluno: ");
        gets(alunos[i].nome);

        printf("Digite o codigo da disciplina: ");
        scanf("%d", &alunos[i].codigoDisciplina);

        printf("Digite a primeira nota: ");
        scanf("%f", &alunos[i].nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &alunos[i].nota2);
        
    }
    
}
