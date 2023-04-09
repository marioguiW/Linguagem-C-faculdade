#include <stdio.h>
int main(int argc, char const *argv[])
{
    float valor_moeda;
    char moeda;

    printf("Digite o valor em reais : ");
    scanf("%f", &valor_moeda);

    printf("Em qual moeda deseja converter?\n");
    printf("Digite 'f' para Franco suico\n");
    printf("Digite 'l' para Libra Esterlina\n");
    printf("Digite 'd' para Dolar\n");
    printf("Digite 'm' para Marco Alemao\n");
    scanf("%s", &moeda);

    if(moeda == 'f'){
        valor_moeda = valor_moeda / 5.71;
        printf("O valor em reais convertido para Franco Suico eh %.2f", valor_moeda);
    }else if(moeda == 'l'){
        valor_moeda = valor_moeda / 6.44;
        printf("O valor em reais convertido para Libra Esterlina eh %.2f", valor_moeda);
    }else if(moeda == 'd'){
        valor_moeda = valor_moeda / 5.23;
        printf("O valor em reais convertido para Dolar eh %.2f", valor_moeda);
    }else if(moeda == 'm'){
        valor_moeda = valor_moeda / 2.89;
        printf("O valor em reais convertido para Marco Alemao eh %.2f", valor_moeda);

    }
    return 0;
}