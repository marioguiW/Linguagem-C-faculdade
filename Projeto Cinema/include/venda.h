#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define MAX_LINE_LENGTH 1000

int venda(){

    int optionVenda;

    printf("$===========$ Venda de Ingressos $===========$\n");
    printf("| [1] Filmes, Horarios e Precos              |\n");
    printf("| [2] Clientes no Sistema                    |\n");
    printf("| [3] Vender Ingressos                       |\n");
    printf("| [4] -------------------------              |\n");
    printf("| [5] Limpar a Tela                          |\n");
    printf("| [6] Voltar                                 |\n");
    printf("$============================================$\n");
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
    printf("\n");

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
    int teste;
    char horarioFilme[50];

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
                sscanf(linha, "Horario : %[^\n]", horarioFilme);
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

    printf("\n============= Continuando Compra =============\n");
    if(idadeCliente >= 18){
        printf("| Total a pagar: R$ %.2f\n", precoFilme);
    }else if(idadeCliente < 18){
        printf("| Total a pagar: R$ %.2f\n", meiaEntrada);
    }
    printf("| Escolha a forma de pagamento:\n");
    printf("|\n");
    printf("| [1] A vista\n");
    printf("| [2] Credito\n");
    printf("|\n");
    printf("==============================================\n");
    printf("Digite a opcao: ");
    scanf("%d", &pagamento);


    printf("\nProcessando.\n");
    sleep(1);
    printf("Processando..\n");
    sleep(1);
    printf("Processando...\n");
    sleep(1);
    printf("\n");
    system("cls");

    FILE *ticket = fopen("ticketV0.txt", "a");


    if (pagamento == 1)
    {
        printf("> Pagamento a vista concluido! \n\n");
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c|T|I|C|K|E|T|%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,219);
        printf("%c %c %c %c %c Filme: %s\n", 186,219,220,219,186, nomeFilme);
        printf("%c %c%c%c%c%c %c Horario da sessao: %s\n", 186,219,219,219,219,219,186,horarioFilme);
        printf("%c  %c%c%c%c %c Preco do ingresso: R$ %.2f\n", 186,220,220,220,220,186, precoFilme);
        printf("%c %c     %c Desconto: %.2f\n", 186,219,186, meiaEntrada);
        printf("%c %c%c%c%c%c %c\n",186,223,223,223,223,223,186);
        printf("%c %c %c%c%c %c \n", 186,223,223,223,223,186);
        printf("%c %c   %c %c Total pago: R$ %.2f\n", 186,219,219,186, meiaEntrada);
        printf("%c %c%c%c%c%c %c Desejamos um otimo filme !\n", 186,223,223,223,223,223,186);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",200,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,219);
    
        fprintf(ticket,"> Pagamento a vista concluido! \n");
        fprintf(ticket,"%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c|T|I|C|K|E|T|%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,219);
        fprintf(ticket,"%c %c %c %c %c Filme: %s\n", 186,219,220,219,186, nomeFilme);
        fprintf(ticket,"%c %c%c%c%c%c %c Horario da sessao: %s\n", 186,219,219,219,219,219,186,horarioFilme);
        fprintf(ticket,"%c  %c%c%c%c %c Preco do ingresso: R$ %.2f\n", 186,220,220,220,220,186, precoFilme);
        fprintf(ticket,"%c %c     %c Desconto: %.2f\n", 186,219,186, meiaEntrada);
        fprintf(ticket,"%c %c%c%c%c%c %c\n",186,223,223,223,223,223,186);
        fprintf(ticket,"%c %c %c%c%c %c \n", 186,223,223,223,223,186);
        fprintf(ticket,"%c %c   %c %c Total pago: R$ %.2f\n", 186,219,219,186, meiaEntrada);
        fprintf(ticket,"%c %c%c%c%c%c %c Desejamos um otimo filme !\n", 186,223,223,223,223,223,186);
        fprintf(ticket,"%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",200,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,219);
    } else if(pagamento == 2)
    {
        printf("> Pagamento no credito concluido! \n\n");
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c|T|I|C|K|E|T|%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,219);
        printf("%c %c %c %c %c Filme: %s\n", 186,219,220,219,186, nomeFilme);
        printf("%c %c%c%c%c%c %c Horario da sessao: %s\n", 186,219,219,219,219,219,186,horarioFilme);
        printf("%c  %c%c%c%c %c Preco do ingresso: R$ %.2f\n", 186,220,220,220,220,186, precoFilme);
        printf("%c %c     %c Desconto: %.2f\n", 186,219,186, meiaEntrada);
        printf("%c %c%c%c%c%c %c\n",186,223,223,223,223,223,186);
        printf("%c %c %c%c%c %c \n", 186,223,223,223,223,186);
        printf("%c %c   %c %c Total pago: R$ %.2f\n", 186,219,219,186, meiaEntrada);
        printf("%c %c%c%c%c%c %c Desejamos um otimo filme !\n", 186,223,223,223,223,223,186);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",200,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,219);
    
        fprintf(ticket,"> Pagamento no credito concluido! \n");
        fprintf(ticket,"%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c|T|I|C|K|E|T|%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,219);
        fprintf(ticket,"%c %c %c %c %c Filme: %s\n", 186,219,220,219,186, nomeFilme);
        fprintf(ticket,"%c %c%c%c%c%c %c Horario da sessao: %s\n", 186,219,219,219,219,219,186,horarioFilme);
        fprintf(ticket,"%c  %c%c%c%c %c Preco do ingresso: R$ %.2f\n", 186,220,220,220,220,186, precoFilme);
        fprintf(ticket,"%c %c     %c Desconto: %.2f\n", 186,219,186, meiaEntrada);
        fprintf(ticket,"%c %c%c%c%c%c %c\n",186,223,223,223,223,223,186);
        fprintf(ticket,"%c %c %c%c%c %c \n", 186,223,223,223,223,186);
        fprintf(ticket,"%c %c   %c %c Total pago: R$ %.2f\n", 186,219,219,186, meiaEntrada);
        fprintf(ticket,"%c %c%c%c%c%c %c Desejamos um otimo filme !\n", 186,223,223,223,223,223,186);
        fprintf(ticket,"%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",200,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,219);
    }
    fclose(ticket);
}
