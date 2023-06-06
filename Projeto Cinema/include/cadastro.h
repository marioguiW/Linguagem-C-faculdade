#include <Stdio.h>
 

int cadastro(){

    int optionCadastro = 0;

    printf("=============== Cadastros ===============\n");
    printf("|  [1] - Cadastrar Filme                |\n");
    printf("|  [2] - Listar todos os filmes         |\n");
    printf("|  [3] - Cadastrar cliente              |\n");
    printf("|  [4] - Listar todos os clientes       |\n");
    printf("|  [5] - Limpar a Tela                  |\n");
    printf("|  [6] - VOLTAR                         |\n");
    printf("=========================================\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &optionCadastro);

    return optionCadastro;
}

int cadastro_filmes(int *id,char nome[30], char hora[10], float *preco){

    printf("========= Cadastro de Filme =========\n");
    
    fflush(stdin);
    *id = 1;

    printf("Digite o nome do filme: ");
    gets(nome);
    fflush(stdin);

    printf("Digite o horario do filme: ");
    gets(hora);
    fflush(stdin);

    printf("Digite o preco do ingresso: ");
    scanf("%f", preco);
    fflush(stdin);

    return id,nome,hora,preco;
}

int listar_filmes(FILE *arquivo_txt_cinema){
    char tudo[100];

    while(fgets(tudo,100,arquivo_txt_cinema) != NULL){
        printf("| %s", tudo);
    }
}

int cadastro_clientes(int *id, char nome[30], int *idade){
    printf("========= Cadastro de Cliente =========\n");

    fflush(stdin);
    *id = 1;

    printf("Digite o nome do cliente: ");
    gets(nome);
    fflush(stdin);

    printf("Digite a idade do cliente: ");
    scanf("%d", idade);

    return id,nome,idade;
}

int listar_clientes(FILE *arquivo_txt_clientes){
    char tudo[100];

    while (fgets(tudo,100,arquivo_txt_clientes) != NULL)
    {
        printf("| %s", tudo);
    }
    
}