#include <stdio.h>
float main(float argc, char const *argv[])
{
    float number1, number2; 
    float resultado;
    char parada,operation;

    do{
        printf("Digite o primeiro numero : ");
        scanf("%f",&number1);

        printf("Digite qual operacao deseja realizar!\n");
        printf("1 para +\n");
        printf("2 para -\n");
        printf("3 para *\n");
        printf("4 para /\n");
        scanf("%s", &operation);

        printf("Digite o segundo numero : ");
        scanf("%f",&number2);

        switch (operation){
            case '1':
                resultado = number1 + number2;
                printf("O resultado é %f"), resultado;
                break;
            case '2':
                resultado = number1-number2;
                printf("O resultado é %f"), resultado;
                break;
            case '3':
                resultado = number1*number2;
                printf("O resultado é %.2f"), resultado;
                break;
            case '4':
                resultado = number1/number2;
                printf("O resultado é %.2f"), resultado;
                break;
            default:
                printf("Digite o numero da operacao corretamente!!\n");
                break;
        }
        printf("Deseja informar um novo calculo? ");
        scanf("%s", &parada);
    }while(parada == 's' || parada == 'S');



    return 0;
}


