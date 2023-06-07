#include <stdio.h>
#include <string.h>

int consultas(){
    int optionConsultas;

    printf("================ Consultas ================\n");
    printf("|  [1] - Consultar Filmes e seus horarios |\n");
    printf("|  [2] - Procurar filme por nome          |\n");
    printf("|  [3] - Consultar clientes               |\n");
    printf("|  [4] - Procurar cliente por nome        |\n");
    printf("|  [5] - Limpar a Tela                    |\n");
    printf("|  [6] - VOLTAR                           |\n");
    printf("=========================================\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &optionConsultas);

    return optionConsultas;
}

int listaFilmePorNome(FILE *arquivo_txt_cinema){

    arquivo_txt_cinema = fopen("cinemaV0.txt", "r");

    if (arquivo_txt_cinema == NULL) {
    printf("Erro na abertura do arquivo!\n");
    return 0;
    }

    char nomeFilme[30];

    printf("========== Procurar Filme por Nome ==========\n");
    printf("Digite o nome do filme: ");
    gets(nomeFilme);

    int contadora = 0;
    int linha;
    char line[100];
        

    // while(fgets(line,100, arquivo_txt_cinema) != NULL){
    //     printf("teste1");
    //     if(strncmp(line, "Nome do filme:", 14) == 0){
    //         printf("teste2");
    //         char filmeExistente[30];
    //         if (sscanf(line, "Nome do filme: %29s", filmeExistente) == 1){
    //             printf("teste3");
    //             if (strcmp(nomeFilme, filmeExistente) == 0)
    //             {
    //                 printf("%s", nomeFilme);

    //                 printf("%s", filmeExistente);
    //             }           
    //         }
    //     }
    //     contadora++;
    // }
    fclose(arquivo_txt_cinema);
    return linha;
}

// int ler_ultimo_id_cliente() {

//     FILE *clientes = fopen("clienteV0.txt", "r");
//     if (clientes == NULL) {
//     printf("Erro na abertura do arquivo!\n");
//     return 0;
//     }

//     int ultimo_id = 0;
//     char line[100];
//     while (fgets(line, 100,clientes) != NULL) {
//         if (strncmp(line, "id :", 4) == 0) { //compara se os primeiros 4 caracteres da linha são == "id :"
//             int id;
//             if (sscanf(line, "id : %d", &id) == 1) { //sscanf lê o elemento de uma array e incrementa em outra
//                 ultimo_id = id; //atribuindo sempre o ultimo "id : <valor>" a variavel id
//             }
//         }
//     }