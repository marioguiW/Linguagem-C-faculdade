#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    int delta;

    printf("Calculadora de Equacao do Segundo Grau!!\n");
    printf("Digite o valor de A : ");
    scanf("%d", &a);

    if(a == 0){
        printf("Não eh uma equacao do primeiro grau!\n");
    }else{
        printf("Digite o valor de B : \n");
        scanf("%d", &b);

        printf("Digite o valor de C : \n");
        scanf("%d", &c);

        delta = (b*b) - (4 * a * c);
        
        if(delta <= 0){
            printf("nao ha raizes reais para essa equacao!");
        }else{
            printf("O valor de delta eh %i", delta);
        }
    }

    return 0;
}