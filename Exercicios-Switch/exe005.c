#include <stdio.h>
int main(){
    float km;
    char tipoCarro, repeat;
    float calculo;

    do{
        printf("Digite quanto foi o percurso em km:\n");
        scanf("%f", &km);
        fflush(stdin);
        printf("Carro tipo A - 12 km por litro\n");
        printf("Carro tipo B - 9 km por litro\n");
        printf("Carro tipo B - 8 km por litro\n");

        printf("Informe qual o tipo de carro:\n");
        scanf("%s", &tipoCarro);
        
        switch (tipoCarro){
            case 'A':
                calculo = km / 12;
                printf("O consumo medio de combustivel foi de %f litros\n", calculo); 
            break;
            case 'B':
                calculo = km /9;
                printf("O consumo medio de combustivel foi de %f litros\n", calculo);
            break;
            case 'C':
                calculo = km /8;
                printf("O consumo medio de combustivel foi de %f litros\n", calculo);
            break;
            default:
                printf("Digite o tipo correto do carro!\n");
            break;
        }
        printf("Deseja informar outro valor de quilometragem ou carro?\n");
        fflush(stdin);
        scanf("%c", &repeat);
    } while (repeat == 's' || repeat == 'S');
    
}