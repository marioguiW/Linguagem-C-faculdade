#include <stdio.h>
#include <string.h>

int main(){

    FILE *cinema;
    cinema = fopen("cinemaV0.txt", "a");

    if (cinema == NULL){
        printf("Erro na abertura do arquivo!");
        return 1;
    }

    struct informacoes
    {
        char nome__filme[20];
        char horario[10];
        float preco;
    }cinema;
    

    int option;

    printf("=============== Cinema 1.0 ===============\n");
    printf("|  [1] - Cadastros                       |\n");
    printf("|  [2] - Consultas                       |\n");
    printf("|  [3] - Atualizacoes                    |\n");
    printf("|  [4] - Venda de Ingresso               |\n");
    printf("|  [5] - Limpar a Tela                   |\n");
    printf("|  [6] - Sair                            |\n");
    printf("==========================================\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &option);
    fflush(stdin);

    fclose(cinema);

    switch (option)
    {
    case 1:
        printf("=============== Cadastros ===============\n");
        printf("|  [1] - Cadastrar Filme                |\n");
        printf("|  [2] - Listas todos os filmes         |\n");
        printf("|  [3] - Cadastras cliente              |\n");
        printf("|  [4] - Listar todos os clientes       |\n");
        printf("|  [5] - Limpar a Tela                  |\n");
        printf("|  [6] - Sair                           |\n");
        printf("=========================================\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("========= Cadastro de Filme =========\n");
            printf("Digite o nome do filme: ");

            
            break;
        
        default:
            break;
        }
        break;
    
    default:
        break;
    }

}