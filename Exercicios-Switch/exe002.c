#include <stdio.h>
int main(){

   int lados;;
   char deseja;

   do
   {
        printf("Digite o numero de lados de uma figura geometrica :\n");
        scanf("%i", &lados);
        switch (lados)
        {
        case 3:
            printf("a figura com 3 lados eh um triangulo!");
            break;
        case 4:
            printf("a figura ccom 4 lados eh um quadrado ou um rentangulo!");
            break;
        case 5:
            printf("a figura com 5 lados eh um pentagono!");
            break;
        case 6:
            printf("a figura com 6 lados eh um hexagono!");
            break;
        default:
            printf("Digite o numero corretamente!");
            break;
        }
    printf("\nDeseja saber outro valor?\n");
    fflush(stdin);
    scanf("%c", &deseja);
   } while (deseja == 's' || deseja == 'S');
   
    
}