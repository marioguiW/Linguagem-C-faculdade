#include <stdio.h>
int main(){
    char regiao, repeat;
    int total;
    int idaVolta;

    do
    {
        
        printf("Digite qual o o seu destino?\n");
        printf("'N' para Regiao Norte\n");
        printf("'NE' para Regiao Nordeste\n");
        printf("'CO' para Regiao Centro-Oeste\n");
        printf("'S' para Regiao Sul\n");
        fflush(stdin);
        scanf("%s", &regiao);

        printf("Digite 1 para comprar uma passagem só de ida!\n");
        printf("Digite 2 para comprar uma passagem de ida e volta!\n");
        scanf("%i", &idaVolta);

        switch (regiao){
        case 'N':
            if(idaVolta == 1){
                total = 500;
                printf("O valor da passagem somente de ida serah de %i\n", total);
            }else if(idaVolta == 2){
                total = 900;
                printf("O valor da passagem de ida e volta serah de %i\n", total);
            }
            break;
        case 'NE':
            if(idaVolta == 1){
                total = 350;
                printf("O valor da passagem somente de ida serah de %i\n", total);
            }else if(idaVolta == 2){
                total = 650;
                printf("O valor da passagem de ida e volta serah de %i\n", total);
            }
            break;
        case 'CO':
            if(idaVolta == 1){
                total = 350;
                printf("O valor da passagem somente de ida serah de %i\n", total);
            }else if(idaVolta == 2){
                total = 600;
                printf("O valor da passagem de ida e volta serah de %i\n", total);
            }
        break;
        case 'S':
            if(idaVolta == 1){
                total = 300;
                printf("O valor da passagem somente de ida serah de %i\n", total);
            }else if(idaVolta == 2){
                total = 550;
                printf("O valor da passagem de ida e volta serah de %i\n", total);
            }
        break;
        default:
            printf("Digite o Destino correto!\n");
        break;
        }
        printf("Deseja ver o valor da passagem de outro destino? 's' sim 'n' nao!\n");
        fflush(stdin);
        scanf("%s", &repeat);
    } while (repeat == 's' );
    
}