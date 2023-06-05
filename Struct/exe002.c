// Faça um programa que armazene em um registro de dados (estrutura composta) os
// dados de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F),
// CPF, Data de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa
// (string de até 30 caracteres) e Salário. Os dados devem ser digitados pelo usuário,
// armazenados na estrutura e exibidos na tela.


#include <stdio.h>

int main(){

    int limite;

    struct registro__de__dados {
        char nome[20];
        int idade;
        char sexo;
        int cpf;
        char data__nascimento[20];
        int codigo__setor;
        char cargo [30];
        float salario;
    } funcionario[5];

    printf("Quantos funcionarios deseja cadastrar? \n");
    scanf("%d", &limite);
    fflush(stdin);

    for (int i = 0; i < limite; i++)
    {
        printf("Digite o nome do funcionario : ");
        gets(funcionario[i].nome);
        fflush(stdin);

        printf("Digite a idade do funcionario : ");
        scanf("%d", &funcionario[i].idade);
        fflush(stdin);

        printf("Digite o sexo do funcionario, [M] - Masculino, [F] - Feminino : ");
        scanf("%c", &funcionario[i].sexo);
        fflush(stdin);

        printf("Digite o cpf do funcionario : ");
        scanf("%d", &funcionario[i].cpf);
        fflush(stdin);

        printf("Digite a data de nascimento no modelo dd/mm/aa : ");
        gets(funcionario[i].data__nascimento);
        fflush(stdin);

        printf("Digite o codigo do setor do funcionario : ");
        scanf("%d", &funcionario[i].codigo__setor);
        fflush(stdin);

        printf("Digite o cargo do funcionario : ");
        gets(funcionario[i].cargo);
        fflush(stdin);

        printf("Digite o salario do funcionario : ");
        scanf("%f", &funcionario[i].salario);
        fflush(stdin);

        printf("\n\n");
    }

    for (int i = 0; i < limite; i++)
    {
        printf("--------Ficha de Cadastro--------\n");
        printf("Nome : %s\n", funcionario[i].nome);
        printf("Idade : %d\n", funcionario[i].idade);
        printf("Sexo : %c\n", funcionario[i].sexo);
        printf("CPF : %d\n", funcionario[i].cpf);
        printf("Data de Nascimento : %s\n", funcionario[i].data__nascimento);
        printf("Setor : %d\n", funcionario[i].codigo__setor);
        printf("Cargo : %s\n", funcionario[i].cargo);
        printf("Salario : %f\n", funcionario[i].salario);
        printf("\n");
        
    }
    
    
    

}