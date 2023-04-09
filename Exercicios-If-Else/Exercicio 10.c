#include <stdio.h>

int main(int argc, char const *argv[])
{
    float salario = 0;
    printf("Digite o valor do salario : ");
    scanf("%f", &salario);

    float desconto20 = (salario * 20) / 100;
    float desconto25 = (salario * 25) / 100;
    float desconto30 = (salario * 30) / 100;

    if(salario <= 600){
        printf("Isento de imposto!");
    }else if(salario > 600 && salario <= 1200){
        printf("O desconto do INSS eh d %.2f", desconto20);
    }else if(salario > 1200 && salario <= 2000){
        printf("O desconto do INSS eh de %.2f", desconto25);
    }else if(salario > 2000){
        printf("O desconto do INSS eh de %2.f", desconto30);
    }
    return 0;
}
