#include <stdio.h>
#include <string.h>

int consultas(){
    int optionConsultas;

    printf("================ Consultas ================\n");
    printf("|  [1] - Consultar Filmes e seus horarios |\n");
    printf("|  [2] - Procurar filme por nome          |\n");
    printf("|  [3] - Consultar clientes               |\n");
    printf("|  [4] - Procurar cliente por nome        |\n");
    printf("|  [5] - Limpar a Tela                    |\n");
    printf("|  [6] - VOLTAR                           |\n");
    printf("=========================================\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &optionConsultas);

    return optionConsultas;
}

int listaFilmePorNome(FILE *arquivo_txt_cinema){

    arquivo_txt_cinema = fopen("cinemaV0.txt", "r");

    if (arquivo_txt_cinema == NULL) {
    printf("Erro na abertura do arquivo!\n");
    return 0;
    }

    char nomeFilme[30];

    printf("========== Procurar Filme por Nome ==========\n");
    printf("Digite o nome do filme: ");
    fgets(nomeFilme,30,stdin);

    char exemplo[50] = "Nome do filme: ";

    strcat(exemplo, nomeFilme);
    

    int fodase;
    int contadora = 0;
    int linha;
    char line[100];

    while(fgets(linha,100,arquivo_txt_cinema) != NULL){
        if (strncmp(line, exemplo, 40) == 0){
            break;
        }
        contadora++;
        
    }

    printf("%d", contadora);
    printf("lalalala");
    scanf("%d", &fodase);

}

