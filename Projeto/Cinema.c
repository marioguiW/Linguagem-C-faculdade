#include <stdio.h>
#include <string.h>

int main(){

    FILE *pont_arq;
    char palavra[20];

    pont_arq = fopen("arquivo_palavra.txt", "w");

    if (pont_arq == NULL){
        printf("Erro na abertura do arquivo!");
        return 1;
    }

    struct cinema
    {
        char filme[20];
        int sala;
        char horario[10];
        float price;

    }informations[5];

    for(int i = 0; i < 2; i++){
        printf("Digite o Nome do filme em exibicao : ");
        gets(informations[i].filme);
        fflush(stdin);
        printf("Qual sala o filme sera exibido : ");
        scanf("%d", &informations[i].sala);
        fflush(stdin);
        printf("Qual horario o filme sera exibido : ");
        gets(informations[i].horario);
        fflush(stdin);
        printf("Qual o valor do ingresso : ");
        scanf("%f", &informations[i].price);
        fflush(stdin);
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        fprintf(pont_arq, "Filme : %s\n", informations[i].filme);
        fprintf(pont_arq, "Sala : %d\n", informations[i].sala);
        fprintf(pont_arq, "Horario : %s\n", informations[i].horario);
        fprintf(pont_arq, "Preco : %.2f\n", informations[i].price);
        fprintf(pont_arq, "\n");
    }

    
    fclose(pont_arq);
    
    system("pause");

}