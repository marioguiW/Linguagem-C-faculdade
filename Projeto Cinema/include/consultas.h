#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE_LENGTH 1000

int consultas(){
    int optionConsultas;


    printf("@=============@ Consultas @===============@\n");
    printf("|  [1] - Consultar Filmes e seus horarios |\n");
    printf("|  [2] - Procurar filme por nome          |\n");
    printf("|  [3] - Consultar clientes               |\n");
    printf("|  [4] - Procurar cliente por nome        |\n");
    printf("|  [5] - Limpar a Tela                    |\n");
    printf("|  [6] - VOLTAR                           |\n");
    printf("@=========================================@\n");
    printf("\nDigite a opcao desejada: ");
    scanf("%d", &optionConsultas);

    return optionConsultas;
}

void filtrar_filme_por_nome() {
    FILE *file = fopen("cinemaV0.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    char nome[50];
    printf("> Abaixo digite o nome do filme a ser procurado\n\n\n");
    printf("=============== Procurar Filme por nome ===============\n");
    printf("Digite o nome do filme para filtrar: ");
    fgets(nome, sizeof(nome), stdin);
    
    nome[strcspn(nome, "\n")] = '\0';  // Remove a quebra de linha do final do nome
    printf("\n");
    // Converter o nome do arquivo e o nome digitado para letras minúsculas
    for (int i = 0; nome[i]; i++) {
        nome[i] = tolower(nome[i]);
    }

    char linha[MAX_LINE_LENGTH];
    int encontrou = 0;
    int emBloco = 0;
    char id[10];

    while (fgets(linha, MAX_LINE_LENGTH, file) != NULL) {
        if (emBloco) {
            if (strcmp(linha, "\n") == 0) {
                emBloco = 0;
                printf("\n");
            } else {
                printf("%s", linha);
            }
        } else if (strstr(linha, "id") != NULL) {
            sscanf(linha, "id : %s", id);
        } else if (strstr(linha, "Nome do filme:") != NULL) {
            char nomeFilme[50];
            sscanf(linha, "Nome do filme: %[^\n]", nomeFilme);  // Lê o nome do filme até encontrar uma quebra de linha

            // Converter o nome do filme para letras minúsculas
            for (int i = 0; nomeFilme[i]; i++) {
                nomeFilme[i] = tolower(nomeFilme[i]);
            }

            if (strcmp(nomeFilme, nome) == 0) {
                encontrou = 1;
                emBloco = 1;
                printf("id : %s\n", id);
                printf("%s", linha);
            }
        }
    }

    if (!encontrou) {
        printf("Nenhum filme encontrado com o nome especificado.\n");
    }

    fclose(file);
}

void filtrar_cliente_por_nome() {
    FILE *file = fopen("clienteV0.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    char nome[50];
    printf("> Abaixo digite o nome do cliente a ser procurado\n\n\n");
    printf("=============== Procurar Cliente por nome ===============\n");
    printf("Digite o nome do cliente para filtrar: ");
    fgets(nome, sizeof(nome), stdin);
    
    nome[strcspn(nome, "\n")] = '\0';  // Remove a quebra de linha do final do nome
    printf("\n");
    // Converter o nome do arquivo e o nome digitado para letras minúsculas
    for (int i = 0; nome[i]; i++) {
        nome[i] = tolower(nome[i]);
    }

    char linha[MAX_LINE_LENGTH];
    int encontrou = 0;
    int emBloco = 0;
    char id[10];

    while (fgets(linha, MAX_LINE_LENGTH, file) != NULL) {
        if (emBloco) {
            if (strcmp(linha, "\n") == 0) {
                emBloco = 0;
                printf("\n");
            } else {
                printf("%s", linha);
            }
        } else if (strstr(linha, "id") != NULL) {
            sscanf(linha, "id : %s", id);
        } else if (strstr(linha, "Nome do cliente:") != NULL) {
            char nomeCliente[50];
            sscanf(linha, "Nome do cliente: %[^\n]", nomeCliente);  // Lê o nome do filme até encontrar uma quebra de linha

            // Converter o nome do filme para letras minúsculas
            for (int i = 0; nomeCliente[i]; i++) {
                nomeCliente[i] = tolower(nomeCliente[i]);
            }

            if (strcmp(nomeCliente, nome) == 0) {
                encontrou = 1;
                emBloco = 1;
                printf("id : %s\n", id);
                printf("%s", linha);
            }
        }
    }

    if (!encontrou) {
        printf("Nenhum cliente encontrado com o nome especificado.\n");
    }

    fclose(file);
}