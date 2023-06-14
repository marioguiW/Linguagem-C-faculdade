#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

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
    long int posicaoInicial = -1;
    long int posicaoFinal = -1;
    char bloco[MAX_LINE_LENGTH] = "";

    while (fgets(linha, MAX_LINE_LENGTH, file) != NULL) {
        if (emBloco) {
            if (strcmp(linha, "\n") == 0) {
                emBloco = 0;
                posicaoFinal = ftell(file);
                break;
            } else {
                printf("%s", linha);
            }
        } else if (strstr(linha, "id : ") != NULL) {
            int linhaID;
            sscanf(linha, "id : %d", &linhaID);
            if (linhaID == id) {
                encontrou = 1;
                emBloco = 1;
                posicaoInicial = ftell(file) - strlen(linha);
                strcat(bloco, linha);
            }
        }
    }

    if (!encontrou) {
        printf("Nenhum filme encontrado com o ID especificado.\n\n");
    } else {
        fseek(file, posicaoInicial, SEEK_SET);

        char nomeFilme[50];
        char horario[10];
        float preco;

        printf("\n\n");

        printf("Digite o novo nome do filme: ");
        getchar(); // Limpar o buffer do teclado
        fgets(nomeFilme, sizeof(nomeFilme), stdin);
        nomeFilme[strcspn(nomeFilme, "\n")] = '\0';  // Remove a quebra de linha do final do nome

        printf("Digite o novo horario: ");
        fgets(horario, sizeof(horario), stdin);
        horario[strcspn(horario, "\n")] = '\0';  // Remove a quebra de linha do final do horario

        printf("Digite o novo preco: ");
        scanf("%f", &preco);

        fprintf(file, "id : %d\n", id);
        fprintf(file, "Nome do filme: %s\n", nomeFilme);
        fprintf(file, "Horario : %s\n", horario);
        fprintf(file, "Preco : %.2f\n", preco);

        while (fgets(linha, MAX_LINE_LENGTH, file) != NULL) {
            if (strcmp(linha, "\n") != 0) {
                fprintf(file, "%s", linha);
            }
        }

        printf("\nCadastro do filme atualizado com sucesso!\n\n");
    }

    fclose(file);
}

int main() {
    atualizar_cadastro_filmes();
    return 0;
}