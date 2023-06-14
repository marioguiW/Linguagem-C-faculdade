#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_LINE_LENGTH 1000

int venda(){

    int optionVenda;


    logo();

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
    printf("> Abaixo digite o id do cliente e o id do filme\n\n\n\n");
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
    int idadeCliente = 0;
    int pagamento;

    // Busca as informações do cliente pelo ID
    while (fgets(linha, sizeof(linha), fileClientes) != NULL) {
        if (strstr(linha, "id :") != NULL) {
            int linhaID;
            sscanf(linha, "id : %d", &linhaID);
            if (linhaID == idCliente) {
                encontrouCliente = 1;
                fgets(linha, sizeof(linha), fileClientes);  // Pula a linha do Nome do cliente
                sscanf(linha, "Nome do cliente: %[^\n]", nomeCliente);
                fgets(linha, sizeof(linha), fileClientes);
                sscanf(linha,"Idade do cliente: %d", &idadeCliente);
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
        printf("\nNenhum cliente encontrado com o ID especificado.\n\n");
        return;
    }

    if (!encontrouFilme) {
        printf("\nNenhum filme encontrado com o ID especificado.\n\n");
        return;
    }

    float meiaEntrada = precoFilme / 2;

    
    printf("\n=============== Dados da compra ==============\n");
    printf("| Nome: %s\n", nomeCliente);
    printf("| Idade: %d\n", idadeCliente);
    printf("| Filme: %s\n", nomeFilme);
    printf("| Meia Entrada: R$ %.2f\n", meiaEntrada);
    printf("| Inteira: R$ %.2f\n", precoFilme);
    printf("|\n");
    if (idadeCliente >=18)
    {
        printf("| Voce paga inteira!\n");
    }else if (idadeCliente < 18)
    {
        printf("| Voce paga meia entrada!\n");
    }
    
    printf("==============================================\n");
    printf("\n");

    printf("\n============= Continunando Compra ============\n");
    if(idadeCliente >= 18){
        printf("| Total a pagar: R$ %.2f\n", precoFilme);
    }else if(idadeCliente < 18){
        printf("| Total a pagar: R$ %.2f\n", meiaEntrada);
    }
    printf("| Escolha a forma de pagamento:\n\n");
    printf("| [1] A vista\n");
    printf("| [2] Credito\n");
    printf("%c%c%c%c\n%c\n%c\n%c\n%c%c%c%c\n",219,219,219,219,219,219,219,219,219,219,219);
    
    scanf("\nDigite a opcao: %d", &pagamento);

}
