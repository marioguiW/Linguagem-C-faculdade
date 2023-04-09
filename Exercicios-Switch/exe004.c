#include <stdio.h>
int main(){
    int total, idade;
    char repeat;
    do{
    printf("-------------Plano de saude----------------\n");
    printf("Para calcular o valor do plano precisamos que voce informe sua idade :\n");
    scanf("%i", &idade);
    switch (idade)
    {
    case 0 ... 9:
        total = 100 + 80;
        printf("O total a ser pago eh de R$%i", total);
        break;
    case 10 ... 30:
        total =  100 + 50;
        printf("O total a ser pago eh de R$%i ", total);
        break;
    case 31 ... 39:
        printf("???????????????");
        break;
    case 40 ... 60:
        total = 100 + 95;
        printf("O total a ser pago eh de R$%i", total);
        break;
    case 61 ... 200:
        total = 100 + 130;
        printf("O total a ser pago eh de R$%i", total);
        break;
    }
    printf("\nDeseja informar outra idade? 's' sim 'n' nao\n");
    fflush(stdin);
    scanf("%c",&repeat);
    }while (repeat =='s' || repeat == 'S');
}