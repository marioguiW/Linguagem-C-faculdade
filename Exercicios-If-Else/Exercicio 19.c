#include <stdio.h>
int main()
{
    float litros;
    char combustivel;

    printf("Digite quantos litros foram vendidos : \n");
    scanf("%f", &litros);

    printf("Digite qual foi o combustivel vendido 'e' para etanol e 'g' para gasolina!\n ");
    scanf("%s", &combustivel);
printf("teste");
    if(litros <= 20 && combustivel == 'g'){
        float total = (litros * 4.40) * 0.96;
        printf("O valor pago foi %f já com 4 por cento de desconto!", total);
    }else if(litros > 20 && combustivel == 'g'){
        float total = (litros * 4.40) * 0.94;
        printf("O valor pago foi %f já com 6 por cento de desconto!", total);
    }else if(litros <= 20 && combustivel == 'e'){
        float total = (litros * 4.40) * 0.97;
        printf("O valor pago foi %f já com 3 por cento de desconto!", total);
    }else if(litros > 20 && combustivel == 'e'){
        float total = (litros * 4.40) * 0.95;
        printf("O valor pago foi %f já com 5 por cento de desconto!", total);
    }
    return 0;

}
