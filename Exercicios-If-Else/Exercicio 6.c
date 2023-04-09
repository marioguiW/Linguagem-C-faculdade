#include <stdio.h>
int main(int argc, char const *argv[])
{
    int maca = 0;
    printf("Quantas macas voce deseja comprar ? ");
    scanf("%i", &maca);
    if(maca >= 12){
        int price = 1;
        int total = maca * price;
        printf("Você comprou %i maças por 1 real, um total de %i reais", maca, total);
    }else{
        float price2 = 1.3;
        float total2 = maca * price2;
        printf("Voce comprou %i maças por 1.30 real, um total de %.2f reais", maca, total2);

    }
    return 0;
}
