
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// #define MAX_LINE_LENGTH 1000

// int menuPrincipal();
// int menuConsultas();
// void consultarFilmesHorarios();
// void procurarFilmePorNome();
// void consultarClientes();
// void procurarClientePorNome();
// void limparTela();
// void atualizarCadastroFilmes();
// void atualizarCadastroClientes();

// int main() {
//     int optionPrincipal;

//     do {
//         optionPrincipal = menuPrincipal();

//         switch (optionPrincipal) {
//             case 1:
//                 switch (menuConsultas()) {
//                     case 1:
//                         consultarFilmesHorarios();
//                         break;
//                     case 2:
//                         procurarFilmePorNome();
//                         break;
//                     case 3:
//                         consultarClientes();
//                         break;
//                     case 4:
//                         procurarClientePorNome();
//                         break;
//                     case 5:
//                         limparTela();
//                         break;
//                     case 6:
//                         printf("Voltando ao menu principal...\n");
//                         break;
//                     default:
//                         printf("Opcao invalida.\n");
//                         break;
//                 }
//                 break;
//             case 2:
//                 atualizarCadastroFilmes();
//                 break;
//             case 3:
//                 atualizarCadastroClientes();
//                 break;
//             case 4:
//                 printf("Saindo do programa...\n");
//                 break;
//             default:
//                 printf("Opcao invalida.\n");
//                 break;
//         }

//         printf("\n");
//     } while (optionPrincipal != 4);

//     return 0;
// }

// int menuPrincipal() {
//     int optionPrincipal;

//     printf("================= Menu Principal =================\n");
//     printf("|  [1] - Consultas                               |\n");
//     printf("|  [2] - Atualizar Cadastro de Filmes             |\n");
//     printf("|  [3] - Atualizar Cadastro de Clientes           |\n");
//     printf("|  [4] - Sair do Programa                         |\n");
//     printf("==================================================\n");
//     printf("Digite a opcao desejada: ");
//     scanf("%d", &optionPrincipal);

//     return optionPrincipal;
// }

// int menuConsultas() {
//     int optionConsultas;

//     printf("================ Consultas ================\n");
//     printf("|  [1] - Consultar Filmes e seus horarios |\n");
//     printf("|  [2] - Procurar filme por nome          |\n");
//     printf("|  [3] - Consultar clientes               |\n");
//     printf("|  [4] - Procurar cliente por nome        |\n");
//     printf("|  [5] - Limpar a Tela                    |\n");
//     printf("|  [6] - VOLTAR                           |\n");
//     printf("=========================================\n");
//     printf("Digite a opcao desejada: ");
//     scanf("%d", &optionConsultas);

//     return optionConsultas;
// }

// void consultarFilmesHorarios() {
//     FILE *file = fopen("cinemaV0.txt", "r");
//     if (file == NULL) {
//         printf("Erro ao abrir o arquivo.\n");
//         return;
//     }

//     char linha[MAX_LINE_LENGTH];
//     while (fgets(linha, MAX_LINE_LENGTH, file) != NULL) {
//         printf("%s", linha);
//     }

//     fclose(file);
// }

// void procurarFilmePorNome() {
//     FILE *file = fopen("cinemaV0.txt", "r");
//     if (file == NULL) {
//         printf("Erro ao abrir o arquivo.\n");
//         return;
//     }

//     char nome[50];
//     printf("Digite o nome do filme para filtrar: ");
//     scanf(" %[^\n]", nome);

//     char linha[MAX_LINE_LENGTH];
//     int encontrou = 0;
//     int emBloco = 0;
//     char id[10];

//     while (fgets(linha, MAX_LINE_LENGTH, file) != NULL) {
//         if (emBloco) {
//             if (strcmp(linha, "\n") == 0) {
//                 emBloco = 0;
//                 printf("\n");
//             } else {
//                 printf("%s", linha);
//             }
//         } else if (strstr(linha, "id") != NULL) {
//             sscanf(linha, "id : %s", id);
//         } else if (strstr(linha, "Nome do filme:") != NULL) {
//             char nomeFilme[50];
//             sscanf(linha, "Nome do filme: %[^\n]", nomeFilme);

//             if (strcasecmp(nomeFilme, nome) == 0) {
//                 encontrou = 1;
//                 emBloco = 1;
//                 printf("id : %s\n", id);
//                 printf("%s", linha);
//             }
//         }
//     }

//     if (!encontrou) {
//         printf("Nenhum filme encontrado com o nome especificado.\n");
//     }

//     fclose(file);
// }

// void consultarClientes() {
//     FILE *file = fopen("clienteV0.txt", "r");
//     if (file == NULL) {
//         printf("Erro ao abrir o arquivo.\n");
//         return;
//     }

//     char linha[MAX_LINE_LENGTH];
//     while (fgets(linha, MAX_LINE_LENGTH, file) != NULL) {
//         printf("%s", linha);
//     }

//     fclose(file);
// }

// void procurarClientePorNome() {
//     FILE *file = fopen("clienteV0.txt", "r");
//     if (file == NULL) {
//         printf("Erro ao abrir o arquivo.\n");
//         return;
//     }

//     char nome[50];
//     printf("Digite o nome do cliente para filtrar: ");
//     scanf(" %[^\n]", nome);

//     char linha[MAX_LINE_LENGTH];
//     int encontrou = 0;
//     int emBloco = 0;
//     char id[10];

//     while (fgets(linha, MAX_LINE_LENGTH, file) != NULL) {
//         if (emBloco) {
//             if (strcmp(linha, "\n") == 0) {
//                 emBloco = 0;
//                 printf("\n");
//             } else {
//                 printf("%s", linha);
//             }
//         } else if (strstr(linha, "id") != NULL) {
//             sscanf(linha, "id : %s", id);
//         } else if (strstr(linha, "Nome do cliente:") != NULL) {
//             char nomeCliente[50];
//             sscanf(linha, "Nome do cliente: %[^\n]", nomeCliente);

//             if (strcasecmp(nomeCliente, nome) == 0) {
//                 encontrou = 1;
//                 emBloco = 1;
//                 printf("id : %s\n", id);
//                 printf("%s", linha);
//             }
//         }
//     }

//     if (!encontrou) {
//         printf("Nenhum cliente encontrado com o nome especificado.\n");
//     }

//     fclose(file);
// }

// void limparTela() {
//     printf("Tela limpa!\n");
//     // Implemente a lógica para limpar a tela de acordo com o sistema operacional
// }

// void atualizarCadastroFilmes() {
//     FILE *file = fopen("cinemaV0.txt", "r");
//     if (file == NULL) {
//         printf("Erro ao abrir o arquivo.\n");
//         return;
//     }

//     FILE *tempFile = fopen("temp_cinemaV0.txt", "w");
//     if (tempFile == NULL) {
//         printf("Erro ao abrir o arquivo temporario.\n");
//         fclose(file);
//         return;
//     }

//     char linha[MAX_LINE_LENGTH];
//     int encontrou = 0;
//     int emBloco = 0;
//     char id[10];

//     while (fgets(linha, MAX_LINE_LENGTH, file) != NULL) {
//         if (emBloco) {
//             if (strcmp(linha, "\n") == 0) {
//                 emBloco = 0;
//                 printf("\n");
//             } else {
//                 printf("%s", linha);
//             }
//         } else if (strstr(linha, "id") != NULL) {
//             sscanf(linha, "id : %s", id);
//         } else if (strstr(linha, "Nome do filme:") != NULL) {
//             char nomeFilme[50];
//             sscanf(linha, "Nome do filme: %[^\n]", nomeFilme);

//             printf("Deseja atualizar as informacoes do filme %s (id: %s)? (S/N): ", nomeFilme, id);
//             char resposta[2];
//             scanf(" %[^\n]", resposta);
//             if (toupper(resposta[0]) == 'S') {
//                 encontrou = 1;
//                 emBloco = 1;
//                 printf("Atualize as informacoes do filme:\n");
//                 printf("Nome do filme: ");
//                 scanf(" %[^\n]", nomeFilme);
//                 printf("Horario: ");
//                 scanf(" %[^\n]", linha);
//                 printf("Preco: ");
//                 scanf(" %[^\n]", linha);

//                 fprintf(tempFile, "id : %s\n", id);
//                 fprintf(tempFile, "Nome do filme: %s\n", nomeFilme);
//                 fprintf(tempFile, "%s", linha);
//             } else {
//                 fprintf(tempFile, "%s", linha);
//             }
//         } else {
//             fprintf(tempFile, "%s", linha);
//         }
//     }

//     if (!encontrou) {
//         printf("Nenhum filme encontrado com o id especificado.\n");
//     }

//     fclose(file);
//     fclose(tempFile);

//     remove("cinemaV0.txt");
//     rename("temp_cinemaV0.txt", "cinemaV0.txt");
// }

// void atualizarCadastroClientes() {
//     FILE *file = fopen("clienteV0.txt", "r");
//     if (file == NULL) {
//         printf("Erro ao abrir o arquivo.\n");
//         return;
//     }

//     FILE *tempFile = fopen("temp_clienteV0.txt", "w");
//     if (tempFile == NULL) {
//         printf("Erro ao abrir o arquivo temporario.\n");
//         fclose(file);
//         return;
//     }

//     char linha[MAX_LINE_LENGTH];
//     int encontrou = 0;
//     int emBloco = 0;
//     char id[10];

//     while (fgets(linha, MAX_LINE_LENGTH, file) != NULL) {
//         if (emBloco) {
//             if (strcmp(linha, "\n") == 0) {
//                 emBloco = 0;
//                 printf("\n");
//             } else {
//                 printf("%s", linha);
//             }
//         } else if (strstr(linha, "id") != NULL) {
//             sscanf(linha, "id : %s", id);
//         } else if (strstr(linha, "Nome do cliente:") != NULL) {
//             char nomeCliente[50];
//             sscanf(linha, "Nome do cliente: %[^\n]", nomeCliente);

//             printf("Deseja atualizar as informacoes do cliente %s (id: %s)? (S/N): ", nomeCliente, id);
//             char resposta[2];
//             scanf(" %[^\n]", resposta);
//             if (toupper(resposta[0]) == 'S') {
//                 encontrou = 1;
//                 emBloco = 1;
//                 printf("Atualize as informacoes do cliente:\n");
//                 printf("Nome do cliente: ");
//                 scanf(" %[^\n]", nomeCliente);
//                 printf("Idade do cliente: ");
//                 scanf(" %[^\n]", linha);

//                 fprintf(tempFile, "id : %s\n", id);
//                 fprintf(tempFile, "Nome do cliente: %s\n", nomeCliente);
//                 fprintf(tempFile, "%s", linha);
//             } else {
//                 fprintf(tempFile, "%s", linha);
//             }
//         } else {
//             fprintf(tempFile, "%s", linha);
//         }
//     }

//     if (!encontrou) {
//         printf("Nenhum cliente encontrado com o id especificado.\n");
//     }

//     fclose(file);
//     fclose(tempFile);

//     remove("clienteV0.txt");
//     rename("temp_clienteV0.txt", "clienteV0.txt");
// }


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LINE_LENGTH 1000

int menuPrincipal();
int consultas();
void filtrar_filme_por_nome();
void filtrar_cliente_por_nome();
void cadastrar_filme();
void cadastrar_cliente();
void atualizar_cadastro_filmes();
void atualizar_cadastro_clientes();

int main() {
    int optionPrincipal;

    do {
        optionPrincipal = menuPrincipal();

        switch (optionPrincipal) {
            case 1:
                switch (consultas()) {
                    case 1:
                        filtrar_filme_por_nome();
                        break;
                    case 2:
                        filtrar_cliente_por_nome();
                        break;
                    case 3:
                        // Implemente aqui a consulta de todos os filmes
                        break;
                    case 4:
                        // Implemente aqui a consulta de todos os clientes
                        break;
                    case 5:
                        system("clear");  // Limpar a tela no Linux/macOS
                        //system("cls");  // Limpar a tela no Windows
                        break;
                    case 6:
                        break;
                    default:
                        printf("Opcao invalida. Por favor, tente novamente.\n");
                        break;
                }
                break;
            case 2:
                switch (consultas()) {
                    case 1:
                        // Implemente aqui a consulta de filmes e horários
                        break;
                    case 2:
                        // Implemente aqui a busca por nome de filme
                        break;
                    case 3:
                        // Implemente aqui a consulta de clientes
                        break;
                    case 4:
                        // Implemente aqui a busca por nome de cliente
                        break;
                    case 5:
                        system("clear");  // Limpar a tela no Linux/macOS
                        //system("cls");  // Limpar a tela no Windows
                        break;
                    case 6:
                        break;
                    default:
                        printf("Opcao invalida. Por favor, tente novamente.\n");
                        break;
                }
                break;
            case 3:
                cadastrar_filme();
                break;
            case 4:
                cadastrar_cliente();
                break;
            case 5:
                atualizar_cadastro_filmes();
                break;
            case 6:
                atualizar_cadastro_clientes();
                break;
            case 7:
                // Implemente aqui a função para excluir um filme
                break;
            case 8:
                // Implemente aqui a função para excluir um cliente
                break;
            case 9:
                printf("Obrigado por utilizar o sistema. Ate mais!\n");
                break;
            default:
                printf("Opcao invalida. Por favor, tente novamente.\n");
                break;
        }
    } while (optionPrincipal != 9);

    return 0;
}

int menuPrincipal() {
    int optionPrincipal;

    printf("================== Cinema ==================\n");
    printf("|  [1] - Consultar                       |\n");
    printf("|  [2] - Buscar                           |\n");
    printf("|  [3] - Cadastrar Filme                  |\n");
    printf("|  [4] - Cadastrar Cliente                |\n");
    printf("|  [5] - Atualizar Cadastro de Filmes     |\n");
    printf("|  [6] - Atualizar Cadastro de Clientes   |\n");
    printf("|  [7] - Excluir Filme                    |\n");
    printf("|  [8] - Excluir Cliente                  |\n");
    printf("|  [9] - Sair                             |\n");
    printf("============================================\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &optionPrincipal);

    return optionPrincipal;
}

int consultas() {
    int optionConsultas;

    printf("================ Consultas ================\n");
    printf("|  [1] - Consultar Filmes e seus horarios |\n");
    printf("|  [2] - Procurar filme por nome          |\n");
    printf("|  [3] - Consultar clientes               |\n");
    printf("|  [4] - Procurar cliente por nome        |\n");
    printf("|  [5] - Limpar a Tela                    |\n");
    printf("|  [6] - VOLTAR                           |\n");
    printf("==========================================\n");
    printf("Digite a opcao desejada: ");
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
    getchar(); // Limpar o buffer do teclado
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
    printf("============== Procurar Cliente por nome ==============\n");
    printf("Digite o nome do cliente para filtrar: ");
    getchar(); // Limpar o buffer do teclado
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
            sscanf(linha, "Nome do cliente: %[^\n]", nomeCliente);  // Lê o nome do cliente até encontrar uma quebra de linha

            // Converter o nome do cliente para letras minúsculas
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

void cadastrar_filme() {
    FILE *file = fopen("cinemaV0.txt", "a");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("> Abaixo digite os dados do filme\n\n\n");
    printf("================ Cadastrar Filme ================\n");

    char nomeFilme[50];
    char horario[10];
    float preco;

    printf("Digite o nome do filme: ");
    getchar(); // Limpar o buffer do teclado
    fgets(nomeFilme, sizeof(nomeFilme), stdin);
    nomeFilme[strcspn(nomeFilme, "\n")] = '\0';  // Remove a quebra de linha do final do nome

    printf("Digite o horario: ");
    fgets(horario, sizeof(horario), stdin);
    horario[strcspn(horario, "\n")] = '\0';  // Remove a quebra de linha do final do horario

    printf("Digite o preco: ");
    scanf("%f", &preco);

    fseek(file, 0, SEEK_END);
    fprintf(file, "\n");
    fprintf(file, "id : %d\n", 0);  // Defina o ID corretamente
    fprintf(file, "Nome do filme: %s\n", nomeFilme);
    fprintf(file, "Horario : %s\n", horario);
    fprintf(file, "Preco : %.2f\n", preco);

    fclose(file);

    printf("\nFilme cadastrado com sucesso!\n");
}

void cadastrar_cliente() {
    FILE *file = fopen("clienteV0.txt", "a");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("> Abaixo digite os dados do cliente\n\n\n");
    printf("=============== Cadastrar Cliente ==============\n");

    char nomeCliente[50];
    int idade;

    printf("Digite o nome do cliente: ");
    getchar(); // Limpar o buffer do teclado
    fgets(nomeCliente, sizeof(nomeCliente), stdin);
    nomeCliente[strcspn(nomeCliente, "\n")] = '\0';  // Remove a quebra de linha do final do nome

    printf("Digite a idade do cliente: ");
    scanf("%d", &idade);

    fseek(file, 0, SEEK_END);
    fprintf(file, "\n");
    fprintf(file, "id : %d\n", 0);  // Defina o ID corretamente
    fprintf(file, "Nome do cliente: %s\n", nomeCliente);
    fprintf(file, "Idade do cliente: %d\n", idade);

    fclose(file);

    printf("\nCliente cadastrado com sucesso!\n");
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
        printf("Nenhum filme encontrado com o ID especificado.\n");
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

        printf("\nCadastro do filme atualizado com sucesso!\n");
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

