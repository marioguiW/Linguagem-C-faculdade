#include <stdio.h>
#include <string.h>
#include "../include/cadastro.h"
#include "../include/consultas.h"

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
                    cinema = fopen("cinemaV0.txt", "r");
                    int linha = listaFilmePorNome(cinema);
                    if (linha != -1) {
                        printf("O filme foi encontrado na linha: %d\n", linha);
                    } else {
                        printf("O filme nao foi encontrado.\n");
                    }

                    break;

                case 5:
                    system("cls");
                    break;
                case 6:
                    system("cls");
                    break;
                }


            } while(optionCadastro != 6);
            

            break;

        case 6:
            break;
        }
    } while(option != 6);
    fclose(cinema);
    fclose(clientes);
}