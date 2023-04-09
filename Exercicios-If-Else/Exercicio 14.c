#include <stdio.h>
int main(int argc, char const *argv[])
{
    float salario,salario_aumento;
    printf("Digite o valor do salario para constatar o aumento : ");
    scanf("%f", &salario);

    if(salario <= 280){
        salario_aumento = salario*1.2;
        printf("O salario de %.2f teve um aumento de 20 por cento e passou a ser %.2f",salario,salario_aumento);
    }else if(salario > 280 && salario <= 700){
        salario_aumento = salario*1.15;
        printf("O salario de %.2f teve um aumento de 15 por cento e passou a ser %.2f",salario,salario_aumento);
    }else if(salario > 700 && salario <= 1500){
        salario_aumento = salario*1.1;
        printf("O salario de %.2f teve um aumento de 10 por cento e passou a ser %.2f",salario,salario_aumento);
    }else if(salario > 1500){
        salario_aumento = salario*1.05;
        printf("O salario de %.2f teve um aumento de 5 por cento e passou a ser %.2f",salario,salario_aumento);   
    }
    return 0;
}
