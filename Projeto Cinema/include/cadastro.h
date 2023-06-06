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

int cadastro_filmes(char nome[20], char hora[10], float preco){

    

    printf("========= Cadastro de Filme =========\n");
    printf("Digite o nome do filme: ");
    gets(nome);
    fflush(stdin);

    printf("Digite o horario do filme: ");
    gets(hora);
    fflush(stdin);

    printf("Digite o preco do ingresso: ");
    scanf("%f", &preco);
    fflush(stdin);


    return nome,hora,preco;
}

int listar_filmes(FILE *arquivo_txt){
    char tudo[100];

    while(fgets(tudo,100,arquivo_txt) != NULL){
        printf("| %s", tudo);
    }

    
    
}