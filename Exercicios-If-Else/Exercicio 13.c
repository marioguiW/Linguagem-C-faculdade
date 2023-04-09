#include<stdio.h>
int main(int argc, char const *argv[])
{
    float salario, prestacao,calculo;
    printf("Digite o valor do salario :");
    scanf("%f", &salario);

    printf("Digite o valor da prestação : ");
    scanf("%f", &prestacao);

    calculo = salario * 0.3;

    if(prestacao <= calculo){
        printf("O emprestimo pode ser concedido!");
    }else{
        printf("O emprestimo não pode ser concedido!");
    }
    return 0;
}
