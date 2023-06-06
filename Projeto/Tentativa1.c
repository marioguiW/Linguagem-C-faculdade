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
    } tabela[5];
    

    int option = 0;
    int optionCadastro = 0;

    do
    {

        int valor_tabela = 0;

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

        switch (option)
        {
        case 1:
            do
            {
                printf("=============== Cadastros ===============\n");
                printf("|  [1] - Cadastrar Filme                |\n");
                printf("|  [2] - Listas todos os filmes         |\n");
                printf("|  [3] - Cadastrar cliente              |\n");
                printf("|  [4] - Listar todos os clientes       |\n");
                printf("|  [5] - Limpar a Tela                  |\n");
                printf("|  [6] - VOLTAR                         |\n");
                printf("=========================================\n");
                printf("Digite a opcao desejada: ");
                scanf("%d", &optionCadastro);
                fflush(stdin);

                switch (optionCadastro)
                {
                case 1:
                    
                    printf("========= Cadastro de Filme =========\n");
                    printf("Digite o nome do filme: ");
                    gets(tabela[valor_tabela].nome__filme);
                    fflush(stdin);
                    printf("Digite o horario do filme: ");
                    gets(tabela[valor_tabela].horario);
                    fflush(stdin);
                    printf("Digite o preco do ingresso: ");
                    scanf("%f", &tabela[valor_tabela].preco);
                    fflush(stdin);

                    printf("\n");
                    printf("Filme cadastrado com sucesso!\n");
                    printf("\n");

                    fprintf(cinema, "\n%s\n", tabela[valor_tabela].nome__filme);
                    fprintf(cinema, "%s\n",tabela[valor_tabela].horario, cinema);
                    fprintf(cinema, "%.2f\n",tabela[valor_tabela].preco, cinema);

                    valor_tabela++;
                    fclose(cinema);

                    break;
                }

            }while(optionCadastro != 6);

    
        
        
        default:
            break;
        }
    } while(option != 6);
    fclose(cinema);
}