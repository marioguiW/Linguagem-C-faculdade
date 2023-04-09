#include<stdio.h>
int main(){
    int contC=0, contP=0, contF=0;
    char op, time;
    do{
        printf("Escolha o seu time preferido!\n");
        printf("C - Corinthians\n");
        printf("P - Palmeiras\n");
        printf("F - Flamengo\n");
        scanf("%s",&time);
        switch(time){
            case 'c':
            case 'C':
                contC=contC+1;
                break;
            case 'p':
            case 'P':
                contP= contP+1;
                break;
            case 'f':
            case 'F':
                contF++;
                break;
            default:
                printf("Time invalido\n");
                break;
        }
        printf("Deseja informar novo time?\n");
        scanf("%s",&op);
    }while(op == 's' || op == 'S');
    printf("Corintians = %i\n", contC);
    printf("Palmeiras = %i\n", contP);
    printf("Flamengo = %i\n", contF);
}
