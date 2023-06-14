#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1000

int venda(){
    int optionVenda;

    printf("============= Venda de Ingressos =============\n");
    printf("| [1] Filmes, Horarios e Precos              |\n");
    printf("| [2] Clientes no Sistema                    |\n");
    printf("| [3] Vender Ingressos                       |\n");
    printf("| [4] -------------------------              |\n");
    printf("| [5] Limpar a Tela                          |\n");
    printf("| [6] Voltar                                 |\n");
    printf("==============================================\n");
    printf("\nDigite a opcao desejada: ");
    scanf("%d", &optionVenda);

    return optionVenda;
}

void mostra_ticket() {
    int idCliente;
    int idFilme;

    printf("============= Venda de Ingressos =============\n");
    printf("Digite o ID do cliente: ");
    scanf("%d", &idCliente);
    printf("Digite o ID do filme: ");
    scanf("%d", &idFilme);

    FILE *fileClientes = fopen("clienteV0.txt", "r");
    if (fileClientes == NULL) {
        printf("Erro ao abrir o arquivo de clientes.\n");
        return;
    }

    FILE *fileCinema = fopen("cinemaV0.txt", "r");
    if (fileCinema == NULL) {
        printf("Erro ao abrir o arquivo de filmes.\n");
        fclose(fileClientes);
        return;
    }

    char linha[1000];
    int encontrouCliente = 0;
    int encontrouFilme = 0;
    char nomeCliente[50];
    char nomeFilme[50];
    float precoFilme = 0.0;

    // Busca as informações do cliente pelo ID
    while (fgets(linha, sizeof(linha), fileClientes) != NULL) {
        if (strstr(linha, "id :") != NULL) {
            int linhaID;
            sscanf(linha, "id : %d", &linhaID);
            if (linhaID == idCliente) {
                encontrouCliente = 1;
                fgets(linha, sizeof(linha), fileClientes);  // Pula a linha do Nome do cliente
                sscanf(linha, "Nome do cliente: %[^\n]", nomeCliente);
                break;
            }
        }
    }

    // Busca as informações do filme pelo ID
    while (fgets(linha, sizeof(linha), fileCinema) != NULL) {
        if (strstr(linha, "id :") != NULL) {
            int linhaID;
            sscanf(linha, "id : %d", &linhaID);
            if (linhaID == idFilme) {
                encontrouFilme = 1;
                fgets(linha, sizeof(linha), fileCinema);  // Pula a linha do Nome do filme
                sscanf(linha, "Nome do filme: %[^\n]", nomeFilme);
                fgets(linha, sizeof(linha), fileCinema);  // Pula a linha do Horario
                fgets(linha, sizeof(linha), fileCinema);  // Lê a linha do Preco
                sscanf(linha, "Preco : %f", &precoFilme);
                break;
            }
        }
    }

    fclose(fileClientes);
    fclose(fileCinema);

    if (!encontrouCliente) {
        printf("Nenhum cliente encontrado com o ID especificado.\n");
        return;
    }

    if (!encontrouFilme) {
        printf("Nenhum filme encontrado com o ID especificado.\n");
        return;
    }

    printf("\nNome: %s\n", nomeCliente);
    printf("Filme: %s\n", nomeFilme);
    printf("Valor: %.2f\n", precoFilme);
}
