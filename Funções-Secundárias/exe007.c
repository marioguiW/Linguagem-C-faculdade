// Fazer um programa que solicita o total gasto pelo cliente de uma loja, imprime as opções
// de pagamento, solicita a opção desejada e imprime o valor total das prestações (se
// houverem).
// a) Opção: a vista com 10% de desconto
// b) Opção: em duas vezes (preço da etiqueta)
// c) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima

#include <stdio.h>

int options(float totalGasto, char opcaoEscolhida){

    if (opcaoEscolhida == 'a')
    {
        totalGasto = totalGasto * 0.90;
        printf("O valor a vista com 10 pcento de desconto fica %f",totalGasto);
    }
    else if (opcaoEscolhida == 'b')
    {
        totalGasto = totalGasto / 2;
        printf("Sera pago em duas prestacoes, no valor de %f cada!", totalGasto);
    }
    else if (opcaoEscolhida == 'c')
    {
        totalGasto = 
    }
    
    
}