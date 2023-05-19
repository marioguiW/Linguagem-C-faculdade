// 1. O jogo deve ofertar 5 palavras a serem descobertas (utilize uma matriz para armazenalas);
// 2. Escolha um tema de sua preferência para abordar no jogo, se quiser pode dar a opção
// de vários, sendo que o usuário fará a opção por apenas uma.
// 3. Cada palavra deverá conter uma dica para auxiliar o usuário a identificar a mesma;
// 4. O usuário pode ter 2 tentativas por palavras;
// 5. Ganha o jogo o usuário que conseguir acertar as cinco palavras;
// 6. A cada palavra correta a matriz deve ser mostrada da seguinte forma:

#include <stdio.h>
#include <string.h>

int main(){

    int escolha;
    char resposta[10];

    char palavras[5][10];
    char palavra1[] = "kratos";
    char palavra2[] = "mario";
    char palavra3[] = "link";
    char palavra4[] = "scorpion";
    char palavra5[] = "franklin";

    // Atribui a primeira palavra a primeira linha da matriz**
    // strcpy(palavras[0], palavra1);
    // strcpy(palavras[1], palavra2);
    // strcpy(palavras[2], palavra3);
    // strcpy(palavras[3], palavra4);
    // strcpy(palavras[4], palavra5);

    strcpy(palavras[0], palavra1);
    strcpy(palavras[1], palavra2);
    strcpy(palavras[2], palavra3);
    strcpy(palavras[3], palavra4);
    strcpy(palavras[4], palavra5);
    
    printf("%s", palavras[0]);

    printf("1 |   |   |   |   |   |   | * | * | * | * | \n");
    printf("2 |   |   |   |   |   | * | * | * | * | * | \n");
    printf("3 |   |   |   |   | * | * | * | * | * | * | \n");
    printf("4 |   |   |   |   |   |   |   | * | * | * | \n");
    printf("5 |   |   |   |   |   |   |   |   | * | * | \n");
    printf("1 - Deus da Guerra dos games?\n");
    printf("2 - Maior encanador dos games?\n");
    printf("3 - Personagem Principal do jogo Zelda?\n");
    printf("4 - Personagem com poder de fogo de Mortal Kombat\n");
    printf("5 - personagem negro de uma das maiores franquias de Games!\n");
    printf("\n");

    printf("Qual sua escolha?");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("1 |   |   |   |   |   |   | * | * | * | * | * | * | * |\n");
        printf("1 - Deus da Guerra dos games?\n");

        printf("Qual a sua resposta?\n");
        scanf("%s", &resposta);



        break;
    
    default:
        break;
    }
}
