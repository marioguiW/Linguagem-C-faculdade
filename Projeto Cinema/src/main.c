#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "../include/cadastro.h"
#include "../include/consultas.h"
#include "../include/atualiza.h"
#include "../include/venda.h"

void logo(){
    printf("  %c------------------------------------%c\n",218,191);
    printf("  | %c%c%c%c  %c  %c%c   %c %c%c%c%c %c%c   %c%c %c%c%c%c%c |\n",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    printf("  | %c        %c %c  %c %c    %c %c %c %c %c   %c |\n",219,219,219,219,219,219,219,219,219,219);
    printf("  | %c     %c  %c  %c %c %c%c%c%c %c  %c  %c %c%c%c%c%c |\n",219,219,219,219,219,219,219,219);
    printf("  | %c     %c  %c   %c%c %c    %c     %c %c   %c |\n",219,219,219,219,219,219,219,219,219);
    printf("  | %c%c%c%c  %c  %c    %c %c%c%c%c %c     %c %c   %c |\n",219,219,219,219,219,219,219,219,219,219,219,219);
    printf("  %c------------------------------------%c",192,217);
    printf("\n\n");
}



int main(){

    FILE *cinema;
    cinema = fopen("cinemaV0.txt", "r");

    FILE *clientes;
    clientes = fopen("clienteV0.txt", "r");

    if (cinema == NULL || clientes == NULL){
        printf("Erro na abertura do arquivo!");
        return 1;
    }
    
    int i = 0;
    int option = 0;
    int optionCadastro = 0;
    int optionConsultas = 0;
    int optionAtualiza = 0;
    int optionVenda = 0;

    const char *arquivo = "cinemaV0.txt";

    fclose(cinema);

    do
    {

        logo();

        int valor_tabela = 0;

        printf("=============== Cinema 1.0 ===============\n");
        printf("|  [1] - Cadastros                       |\n");
        printf("|  [2] - Consultas                       |\n");
        printf("|  [3] - Atualizacoes                    |\n");
        printf("|  [4] - Venda de Ingresso               |\n");
        printf("|  [5] - Limpar a Tela                   |\n");
        printf("|  [6] - Sair                            |\n");
        printf("==========================================\n");
        printf("\nDigite a opcao desejada: ");
        scanf("%d", &option);
        fflush(stdin);

        switch (option)
        {
        case 1:
            system("cls");
            do
            {
                fclose(cinema);
                cinema = fopen("cinemaV0.txt", "r");
                optionCadastro = cadastro();
                fflush(stdin);

                switch (optionCadastro)
                {
                case 1:
                    fclose(cinema);
                    system("cls");
                    cinema = fopen("cinemaV0.txt", "a");


                    int ultimoId = ler_ultimo_id_cinema();

                    informacoesCinema filme = cadastro_filmes(ultimoId);

                    
                    fprintf(cinema, "id : %d\n", filme.id);
                    fprintf(cinema, "Nome do filme: %s\n", filme.nome_filme);
                    fprintf(cinema, "Horario : %s\n", filme.horario);
                    fprintf(cinema, "Preco : %.2f;\n\n", filme.preco);

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
                    clientes = fopen("clienteV0.txt", "a");

                    int ultimoIdCliente = ler_ultimo_id_cliente();

                    informacoesCliente cliente = cadastro_cliente(ultimoIdCliente);

                    fprintf(clientes,"id : %d\n", cliente.id);
                    fprintf(clientes,"Nome do cliente: %s", cliente.nome_cliente);
                    fprintf(clientes,"Idade do cliente: %d;\n\n", cliente.idade);

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
        case 2:
            system("cls");
            do
            {
                fclose(cinema);
                optionConsultas = consultas();
                fflush(stdin);

                switch (optionConsultas)
                {
                case 1:
                    system("cls");
                    cinema = fopen("cinemaV0.txt", "r");
                    listar_filmes(cinema);
                    fclose(cinema);
                    break;

                case 2:
                    system("cls");
                    const char *arquivo = "cinemaV0.txt";
                    filtrar_filme_por_nome();

                    break;
                case 3:
                    fclose(clientes);
                    system("cls");
                    clientes = fopen("clienteV0.txt", "r");
              
                    listar_clientes(clientes);
                    fclose(clientes);

                    break;
                case 4:
                    system("cls");
                    const char *arquivo2 = "clienteV0.txt";
                    filtrar_cliente_por_nome();

                    break;

                case 5:
                    system("cls");
                    break;
                case 6:
                    system("cls");
                    break;
                }


            } while(optionConsultas != 6);
        break;

        case 3:
            system("cls");
            do
            {
                fclose(cinema);
                fclose(clientes);

                optionAtualiza = atualiza();

                switch (optionAtualiza)
                {
                case 1:
                    system("cls");
                    atualizar_cadastro_filmes();
                    break;
                case 2:
                    system("cls");
                    excluir_filme_por_id();
                    break;
                case 3:
                    system("cls");
                    atualizar_cadastro_clientes();
                    break; 
                case 4:        
                    system("cls");
                    excluir_cliente_por_id();
                    break;    
                case 5:
                    system("cls");
                    break;
                case 6:
                    system("cls");
                    break;   
                default:
                    system("cls");
                    break;
                }
            } while (optionAtualiza != 6);
            break;
        case 4:
            system("cls");
            do
            {
                optionVenda = venda();

                switch (optionVenda)
                {
                case 1:
                    system("cls");
                    cinema = fopen("cinemaV0.txt", "r");
                    listar_filmes(cinema);
                    break;
                case 2:
                    system("cls");
                    clientes = fopen("clienteV0.txt", "r");
                    listar_clientes(clientes);
                    break;
                case 3:
                    system("cls");
                    mostra_ticket();
                    break;
                case 4:
                    system("cls");
                    break;
                case 5:
                    system("cls");
                    break;
                case 6:
                    system("cls");
                    break;
                default:
                    break;
                }

            } while (optionVenda != 6);
            

        case 6:
            break;

        }
    } while(option != 6);
    fclose(cinema);
    fclose(clientes);
}