#include <Stdio.h>
#include <string.h>
 

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

int ler_ultimo_id() {

    FILE *cinema = fopen("cinemaV0.txt", "r");
    if (cinema == NULL) {
    printf("Erro na abertura do arquivo!\n");
    return 0;
    }

    int ultimo_id = 0;
    char line[100];
    while (fgets(line, 100,cinema) != NULL) {
        if (strncmp(line, "id :", 4) == 0) { //compara se os primeiros 4 caracteres da linha são == "id :"
            int id;
            if (sscanf(line, "id : %d", &id) == 1) { //sscanf lê o elemento de uma array e incrementa em outra
                ultimo_id = id; //atribuindo sempre o ultimo "id : <valor>" a variavel id
            }
        }
    }

    fclose(cinema);
    return ultimo_id;
}



typedef struct 
{
    int id;
    char *nome_filme;
    char *horario;
    float preco;
} informacoesCinema;


informacoesCinema cadastro_filmes(int id){
    int idCadastro = id;
    char nome[30];
    char hora[10];
    float preco = 0;
    

    printf("========= Cadastro de Filme =========\n");
    
    fflush(stdin);

    printf("Digite o nome do filme: ");
    fgets(nome,30,stdin);

    printf("Digite o horario do filme: ");
    fgets(hora,10,stdin);

    printf("Digite o preco do ingresso: ");
    scanf("%f", &preco);

    int length_nome = strlen(nome);
    int length_hora = strlen(hora);

    if(nome[length_nome-1] && hora[length_hora-1] == '\n'){
        printf("teste");
        nome[length_nome-1] = '\0';
        hora[length_hora-1] = '\0';
    }

    
    idCadastro = idCadastro + 1;
    

    informacoesCinema dadosCinema;
    dadosCinema.id = idCadastro;
    dadosCinema.nome_filme = malloc(strlen(nome) + 1); //criando um "nome_filme" com o mesmo tamanho de "nome"
    strcpy(dadosCinema.nome_filme, nome); //atribuindo "nome" a "nome_filme"
    dadosCinema.horario = malloc(strlen(hora) + 1);
    strcpy(dadosCinema.horario, hora);
    dadosCinema.preco = preco;

    return dadosCinema;
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