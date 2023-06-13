#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

int atualiza(){
    int optionAtualiza;

    printf("============== Atualizacoes ===============\n");
    printf("|  [1] - Atualizar dados de um Filme      |\n");
    printf("|  [2] - Remover um filme                 |\n");
    printf("|  [3] - Atualizar dados de um cliente    |\n");
    printf("|  [4] - Remover um cliente               |\n");
    printf("|  [5] - Limpar a Tela                    |\n");
    printf("|  [6] - VOLTAR                           |\n");
    printf("===========================================\n");

    printf("Digite a opcao desejada: ");
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

        printf("Digite o novo horario: ");
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
            }
        }
    }

    if (!encontrou) {
        printf("Nenhum cliente encontrado com o ID especificado.\n");
    } else {
        fseek(file, posicaoAtual, SEEK_SET);

        char nomeCliente[50];
        int idade;

        printf("Digite o novo nome do cliente: ");
        getchar(); // Limpar o buffer do teclado
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
