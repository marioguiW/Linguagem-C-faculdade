#include <stdio.h>
int main(){
    float valorProduto =0;
    float venda;
    printf("Digite o valor do produto : ");
    scanf("%f", &valorProduto);

    if(valorProduto <= 20){
        venda = valorProduto * 1.45;
        printf("o Valor da venda com 45 por cento de lucro foi %f", venda);
    }else if(valorProduto > 20){
        venda = valorProduto * 1.30;
        printf("o Valor da venda com 30 por cento de lucro foi %f", venda);
    }
}