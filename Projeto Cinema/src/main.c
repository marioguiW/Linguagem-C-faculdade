#include <stdio.h>
#include <string.h>
#include "../include/cadastro.h"

int main(){
    

    FILE *cinema;
    cinema = fopen("cinemaV0.txt", "r");

    FILE *clientes;
    clientes = fopen("clienteV0.txt", "r");

    if (cinema == NULL || clientes == NULL){
        printf("Erro na abertura do arquivo!");
        return 1;
    }

    struct informacoesCinema
    {
        int id;
        char nome__filme[30];
        char horario[10];
        float preco;
    } tabela[10];

    struct informacoesClientes
    {
        int id;
        char nome__cliente[30];
        int idade;
    } tabelaClientes[10];
    
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
            system("cls");
            do
            {
                cinema = fopen("cinemav0.txt", "r");
                optionCadastro = cadastro();
                fflush(stdin);

                switch (optionCadastro)
                {
                case 1:
                    fclose(cinema);
                    system("cls");
                    cinema = fopen("cinemaV0.txt", "a");

                    cadastro_filmes(&tabela[i].id,tabela[i].nome__filme, tabela[i].horario, &tabela[i].preco);
                    
                    fprintf(cinema, "id : %d\n", tabela[i].id);
                    fprintf(cinema, "Nome do filme: %s\n", tabela[i].nome__filme);
                    fprintf(cinema, "Horario : %s\n", tabela[i].horario);
                    fprintf(cinema, "Preco : %.2f,\n\n", tabela[i].preco);

                    fclose(cinema);
                    system("cls");
                    printf("> Filme cadastrado com sucesso\n\n");

                    break;
                case 2:
                    fclose(cinema);
                    system("cls");
                    cinema = fopen("cinemav0.txt", "r");

                    listar_filmes(cinema);
                    fclose(cinema);
                    break;
                case 3:
                    fclose(clientes);
                    system("cls");

                    cadastro_clientes(&tabelaClientes[i].id, tabelaClientes[i].nome__cliente, &tabelaClientes[i].idade);

                    clientes = fopen("clienteV0.txt", "a");

                    fprintf(clientes,"id : %d\n", tabelaClientes[i].id);
                    fprintf(clientes,"Nome do cliente: %s\n", tabelaClientes[i].nome__cliente);
                    fprintf(clientes,"Idade do cliente: %d\n\n", tabelaClientes[i].idade);

                    fclose(clientes);
                    system("cls");
                    printf("> Cliente cadastrado com sucesso\n\n");
                    break;
                case 4:
                    fclose(clientes);
                    system("cls");
                    clientes = fopen("clienteV0.txt", "r");
              
                    listar_clientes(clientes);
                    fclose(clientes);

                    break;
                case 5:
                    system("cls");
                    break;
                case 6:
                    system("cls");
                    break;
                
                }
            }while(optionCadastro != 6);
        break;

        case 6:
            break;
        }
    } while(option != 6);
    fclose(cinema);
    fclose(clientes);
}