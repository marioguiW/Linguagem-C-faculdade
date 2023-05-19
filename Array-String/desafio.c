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


        int novamente = 1;

        while (novamente == 1)
        {
        
        int escolha;
        char resposta[10];
        int resultado;

        char palavras[5][10];
        char palavra1[] = "kratos";
        char palavra2[] = "mario";
        char palavra3[] = "link";
        char palavra4[] = "scorpion";
        char palavra5[] = "franklin";

        strcpy(palavras[0], palavra1);
        strcpy(palavras[1], palavra2);
        strcpy(palavras[2], palavra3);
        strcpy(palavras[3], palavra4);
        strcpy(palavras[4], palavra5);
        

        printf("1 |   |   |   |   |   |   | * | * | * | * | \n");
        printf("2 |   |   |   |   |   | * | * | * | * | * | \n");
        printf("3 |   |   |   |   | * | * | * | * | * | * | \n");
        printf("4 |   |   |   |   |   |   |   | * | * | * | \n");
        printf("5 |   |   |   |   |   |   |   |   | * | * | \n");
        printf("\n");
        printf("1 - Deus da Guerra dos games?\n");
        printf("2 - Maior encanador dos games?\n");
        printf("3 - Personagem Principal do jogo Zelda?\n");
        printf("4 - Personagem iconico com poder do fogo do inferno de Mortal Kombat\n");
        printf("5 - personagem negao mais foda de uma das maiores franquias de Games!\n");
        printf("\n");

        printf("Qual sua escolha?");
        scanf("%d", &escolha);

        switch (escolha)
        {
            case 1:
                do
                {
                    novamente = 0;

                    printf("1 - Deus da Guerra dos games?\n");
                    printf("\n");
                    printf("1 |   |   |   |   |   |   | * | * | * | * | * | * | * |\n");
                    printf("\n");
                    printf("Qual a sua resposta?\n");
                    scanf("%s", &resposta);

                    resultado = strcmp(resposta,palavras[0]);

                    if (resultado == 0)
                    {
                        printf("\n");
                        printf("Parabens! Voce acertou! a palavra realmente era Kratos!\n");
                      
                    }else{
                        printf("Que pena, voce errou, deseja tentar novamente?\n");
                        printf("1 - Sim\n");
                        printf("2 - Nao\n");
                        fflush(stdin);
                        scanf("%d" , &novamente);
                    }
                    
                }while (novamente == 1);
            break;

            case 2:
                do
                {
                    novamente = 0;

                    printf("2 - Maior encanador dos games?\n");
                    printf("\n");
                    printf("2 |   |   |   |   |   | * | * | * | * | * | \n");
                    printf("\n");
                    printf("Qual a sua resposta?\n");
                    scanf("%s", &resposta);

                    resultado = strcmp(resposta,palavras[1]);

                    if (resultado == 0)
                    {
                        printf("\n");
                        printf("Parabens! Voce acertou! a palavra realmente era Mario!\n");
                  
                    }else{
                        printf("Que pena, voce errou, deseja tentar novamente?\n");
                        printf("1 - Sim\n");
                        printf("2 - Nao\n");
                        fflush(stdin);
                        scanf("%d" , &novamente);
                    }  
                } while (novamente == 1);
            break;
            
            case 3:
                do
                {
                    novamente = 0;

                    printf("3 - Personagem Principal do jogo Zelda?\n");
                    printf("\n");
                    printf("3 |   |   |   |   | * | * | * | * | * | * | \n");
                    printf("\n");
                    printf("Qual a sua resposta?\n");
                    scanf("%s", &resposta);

                    resultado = strcmp(resposta,palavras[2]);

                    if (resultado == 0)
                    {
                        printf("\n");
                        printf("Parabens! Voce acertou! a palavra realmente era Link!\n");
                       
                    }else{
                        printf("Que pena, voce errou, deseja tentar novamente?\n");
                        printf("1 - Sim\n");
                        printf("2 - Nao\n");
                        fflush(stdin);
                        scanf("%d" , &novamente);
                    }
                    
                }while (novamente == 1);
            break;

            case 4:
                do
                {
                    novamente = 0;

                    printf("4 - Personagem iconico com poder do fogo do inferno de Mortal Kombat\n");
                    printf("\n");
                    printf("4 |   |   |   |   |   |   |   | * | * | * | \n");
                    printf("\n");
                    printf("Qual a sua resposta?\n");
                    scanf("%s", &resposta);

                    resultado = strcmp(resposta,palavras[3]);

                    if (resultado == 0)
                    {
                        printf("\n");
                        printf("Parabens! Voce acertou! a palavra realmente era Scorpion!\n");
                     
                    }else{
                        printf("Que pena, voce errou, deseja tentar novamente?\n");
                        printf("1 - Sim\n");
                        printf("2 - Nao\n");
                        fflush(stdin);
                        scanf("%d" , &novamente);
                    }
                    
                }while (novamente == 1);
            break;

            case 5:
                do
                {
                    novamente = 0;

                    printf("5 - personagem negao mais foda de uma das maiores franquias de Games!\n");
                    printf("\n");
                    printf("5 |   |   |   |   |   |   |   |   | * | * | \n");
                    printf("\n");
                    printf("Qual a sua resposta?\n");
                    scanf("%s", &resposta);

                    resultado = strcmp(resposta,palavras[4]);

                    if (resultado == 0)
                    {
                        printf("\n");
                        printf("Parabens! Voce acertou! a palavra realmente era Franklin!\n");

                    }else{
                        printf("Que pena, voce errou, deseja tentar novamente?\n");
                        printf("1 - Sim\n");
                        printf("2 - Nao\n");
                        fflush(stdin);
                        scanf("%d" , &novamente);
                    }
                    
                }while (novamente == 1);
            break;
        }
    }
}

