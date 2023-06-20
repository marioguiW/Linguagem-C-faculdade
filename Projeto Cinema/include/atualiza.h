#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1000

int atualiza(){
    int optionAtualiza;


    printf("ª=ª=ª=ª=ª= Atualizacoes =ª=ª=ª=ª=ª\n");
    printf("|  [1] - Atualizar dados de um Filme      |\n");
    printf("|  [2] - Remover um filme                 |\n");
    printf("|  [3] - Atualizar dados de um cliente    |\n");
    printf("|  [4] - Remover um cliente               |\n");
    printf("|  [5] - Limpar a Tela                    |\n");
    printf("|  [6] - VOLTAR                           |\n");
    printf("===========================================\n");

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &optionAtualiza);

    return optionAtualiza;
}


void atualizar_cadastro_filmes() {
    FILE *file = fopen("cinemaV0.txt", "r+");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("================ Atualizar Cadastro de Filmes ================\n");

    int id;
    printf("Digite o ID do filme que deseja atualizar: ");
    scanf("%d", &id);

    printf("\n");

    char linha[MAX_LINE_LENGTH];
    int encontrou = 0;
    int emBloco = 0;
    long int posicaoAtual;

    while (fgets(linha, MAX_LINE_LENGTH, file) != NULL) {
        if (emBloco) {
            if (strcmp(linha, "\n") == 0) {
                emBloco = 0;
                printf("\n");
            } else {
                printf("%s", linha);
            }
        } else if (strstr(linha, "id") != NULL) {
            int linhaID;
            sscanf(linha, "id : %d", &linhaID);
            if (linhaID == id) {
                encontrou = 1;
                emBloco = 1;
                posicaoAtual = ftell(file);
            }
        }
    }

    if (!encontrou) {
        printf("Nenhum filme encontrado com o ID especificado.\n\n");
    } else {
        fseek(file, posicaoAtual, SEEK_SET);

        char nomeFilme[50];
        char horario[10];
        float preco;

        printf("Digite o novo nome do filme: ");
        getchar(); // Limpar o buffer do teclado
        fgets(nomeFilme, sizeof(nomeFilme), stdin);
        nomeFilme[strcspn(nomeFilme, "\n")] = '\0';  // Remove a quebra de linha do final do nome

        printf("Digite o novo horario (ex : 20:30): ");
        fgets(horario, sizeof(horario), stdin);
        horario[strcspn(horario, "\n")] = '\0';  // Remove a quebra de linha do final do horario

        printf("Digite o novo preco: ");
        scanf("%f", &preco);
    
        fprintf(file, "Nome do filme: %s\n", nomeFilme);
        fprintf(file, "Horario : %s\n", horario);
        fprintf(file, "Preco : %.2f\n", preco);

        printf("\nCadastro do filme atualizado com sucesso!\n\n");
    }

    fclose(file);
}


void atualizar_cadastro_clientes() {
    FILE *file = fopen("clienteV0.txt", "r+");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("================ Atualizar Cadastro de Clientes ================\n");

    int id;
    printf("Digite o ID do cliente que deseja atualizar: ");
    scanf("%d", &id);

    char linha[MAX_LINE_LENGTH];
    int encontrou = 0;
    int emBloco = 0;
    long int posicaoAtual;

    while (fgets(linha, MAX_LINE_LENGTH, file) != NULL) {
        if (emBloco) {
            if (strcmp(linha, "\n") == 0) {
                emBloco = 0;
                printf("\n");
            } else {
                printf("%s", linha);
            }
        } else if (strstr(linha, "id") != NULL) {
            int linhaID;
            sscanf(linha, "id : %d", &linhaID);
            if (linhaID == id) {
                encontrou = 1;
                emBloco = 1;
                posicaoAtual = ftell(file);
                // obtem a posição atual no arquivo e armazena na variável posicaoAtual
            }
        }
    }

    if (!encontrou) {
        printf("Nenhum cliente encontrado com o ID especificado.\n");
    } else {
        fseek(file, posicaoAtual, SEEK_SET);
        //  move a posição atual no arquivo para a posição armazenada na variável posicaoAtual.

        char nomeCliente[50];
        int idade;

        printf("Digite o novo nome do cliente: ");
        getchar(); // Limpar o buffer do teclado == fflush
        fgets(nomeCliente, sizeof(nomeCliente), stdin);
        nomeCliente[strcspn(nomeCliente, "\n")] = '\0';  // Remove a quebra de linha do final do nome

        printf("Digite a nova idade do cliente: ");
        scanf("%d", &idade);

        fprintf(file, "Nome do cliente: %s\n", nomeCliente);
        fprintf(file, "Idade do cliente: %d\n", idade);

        printf("\nCadastro do cliente atualizado com sucesso!\n");
    }

    fclose(file);
}

void excluir_cliente_por_id() {
    FILE *file = fopen("clienteV0.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int id;
    printf("Digite o ID do cliente que deseja excluir: ");
    scanf("%d", &id);

    FILE *tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Erro ao criar arquivo temporario.\n");
        fclose(file);
        return;
    }

    char linha[MAX_LINE_LENGTH];
    int encontrou = 0;

    while (fgets(linha, MAX_LINE_LENGTH, file) != NULL) {
        int linhaID;
        sscanf(linha, "id : %d", &linhaID);
        if (linhaID != id) {
            fprintf(tempFile, "%s", linha);
        } else {
            encontrou = 1;
        }
    }

    fclose(file);
    fclose(tempFile);

    if (!encontrou) {
        printf("Nenhum cliente encontrado com o ID especificado.\n");
        remove("temp.txt");
    } else {
        remove("clienteV0.txt");
        rename("temp.txt", "clienteV0.txt");
        printf("Cliente removido com sucesso!\n");
    }
}

void excluir_filme_por_id() {
    FILE *file = fopen("cinemaV0.txt", "r");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int id;
    printf("Digite o ID do filme que deseja excluir: ");
    scanf("%d", &id);

    FILE *tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Erro ao criar arquivo temporário.\n");
        fclose(file);
        return;
    }

    char linha[MAX_LINE_LENGTH];
    int encontrou = 0;

    while (fgets(linha, MAX_LINE_LENGTH, file) != NULL) {
        int linhaID;
        sscanf(linha, "id : %d", &linhaID);
        if (linhaID != id) {
            fprintf(tempFile, "%s", linha);
        } else {
            encontrou = 1;
        }
    }

    fclose(file);
    fclose(tempFile);

    if (!encontrou) {
        printf("Nenhum filme encontrado com o ID especificado.\n");
        remove("temp.txt");
    } else {
        remove("cinemaV0.txt");
        rename("temp.txt", "cinemaV0.txt");
        printf("Filme removido com sucesso!\n");
    }
}
