#include <stdio.h>
#include <string.h>
#include "../include/cadastro.h"

int main(){
    

    FILE *cinema;
    cinema = fopen("cinemaV0.txt", "r");

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
    
    int i = 0;
    int option = 0;
    int optionCadastro = 0;

    fclose(cinema);

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
                printf("teste");
                optionCadastro = cadastro();
                fflush(stdin);

                switch (optionCadastro)
                {
                case 1:
                    cinema = fopen("cinemaV0.txt", "a");

                    cadastro_filmes(tabela[i].nome__filme, tabela[i].horario, tabela[i].preco);

                    printf("teste");
                    
                    fprintf("\n%s\n%s\n%f", tabela[i].nome__filme,tabela[i].horario, tabela[i].preco);

                    break;
                case 2:
                    listar_filmes(cinema);

                    break;
                case 6:
                    break;
                
                }

            }while(optionCadastro != 6);

    
        
        
        case 6:
            break;
        }
    } while(option != 6);
    fclose(cinema);
}